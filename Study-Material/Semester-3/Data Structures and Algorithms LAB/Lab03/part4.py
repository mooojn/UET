from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from bs4 import BeautifulSoup
import pandas as pd
import time as sleep

service = Service(executable_path="D:\chromedriver-win64/chromedriver.exe")
options = webdriver.ChromeOptions()
driver = webdriver.Chrome(service=service, options=options)

scrape_url = "http://eduko.spikotech.com/Course/Index"
driver.get(scrape_url)

sleep.sleep(5)  

content = driver.page_source
driver.quit()  

soup = BeautifulSoup(content, 'html.parser')


courses = []
course_data = soup.find('div', id='courseData')

for card in course_data.find_all('div', class_='card'):
    title = card.find('h4', class_='card-title').text.strip()
    instructor = card.find_all('h7')[0].text.strip()
    semester = card.find_all('h7')[1].text.strip()
    description = card.find('p', class_='card-text').text.strip()
    link = card.find('a', class_='btn')['href']
    course_code = link.split('/')[-1] 

    course = {
        'Course Code': course_code,
        'Title': title,
        'Description': description,
        'Instructor': instructor,
        'Semester': semester
    }
    courses.append(course)

df = pd.DataFrame(courses)
df.to_csv('eduko.csv', index=False)

print(df)
print('Scraping completed. Data saved to eduko.csv')