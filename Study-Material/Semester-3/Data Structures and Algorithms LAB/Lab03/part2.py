import matplotlib.pyplot as plt
import seaborn as sns
import pandas as pd
import time

df = pd.read_csv('data/Train.csv') 


# Convert the TYPE column to numerical values for scatter plot visualization
df['TYPE'] = df['TYPE'].map({'ALLERGY': 0, 'COVID': 1, 'FLU': 2})

print('data loaded')

# List of symptoms
symptoms = df.columns[:-1]  # All columns except TYPE


# Scatter plot between each symptom and the label (TYPE)
plt.figure(figsize=(20, 15))
for i, symptom in enumerate(symptoms, 1):
    plt.subplot(5, 4, i)
    sns.scatterplot(x=df[symptom], y=df['TYPE'], hue=df['TYPE'], palette="deep", legend=False)
    plt.title(f'{symptom} vs TYPE')
    plt.xlabel(symptom)
    plt.ylabel('TYPE (0=ALLERGY, 1=COVID, 2=FLU)')
    print('plotted', i)


input("enter to show:")
plt.tight_layout()
plt.show()
