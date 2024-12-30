import matplotlib.pyplot as plt
import pandas as pd

def plot_daily_steps():
    df = pd.read_csv('data/dailySteps_merged.csv')
    df['ActivityDay'] = pd.to_datetime(df['ActivityDay'], format='%m/%d/%Y')
    plt.figure(figsize=(10, 6))
    plt.plot(df['ActivityDay'], df['StepTotal'], marker='o', linestyle='-', color='b')
    plt.xlabel('Date')
    plt.ylabel('Total Steps')
    plt.title('Total Steps on a Daily Basis')
    plt.grid(True)
    plt.xticks(rotation=45)
    plt.tight_layout()
    plt.show()

def plot_daily_distance():
    df = pd.read_csv('data/dailyActivity_merged.csv')
    df['ActivityDate'] = pd.to_datetime(df['ActivityDate'], format='%m/%d/%Y')
    plt.figure(figsize=(12, 6))
    plt.bar(df['ActivityDate'], df['TotalDistance'], color='skyblue')
    plt.xlabel('Date')
    plt.ylabel('Total Distance (miles)')
    plt.title('Daily Distance Covered')
    plt.xticks(rotation=45)
    plt.grid(axis='y')
    plt.tight_layout()
    plt.show()

def plot_sleep_time():
    df = pd.read_csv('data/sleepDay_merged.csv')
    df['SleepDay'] = pd.to_datetime(df['SleepDay'], format='%m/%d/%Y %I:%M:%S %p')
    plt.figure(figsize=(12, 6))
    plt.scatter(df['SleepDay'], df['TotalTimeInBed'], color='purple', alpha=0.7)
    plt.xlabel('Date')
    plt.ylabel('Total Time in Bed (minutes)')
    plt.title('Total Time in Bed Over Time')
    plt.xticks(rotation=45)
    plt.grid(True)
    plt.tight_layout()
    plt.show()

def plot_hourly_steps():
    df = pd.read_csv('data/hourlySteps_merged.csv')
    df['ActivityHour'] = pd.to_datetime(df['ActivityHour'], format='%m/%d/%Y %I:%M:%S %p')
    df_filtered = df[df['ActivityHour'].dt.date == pd.to_datetime('2016-04-12').date()]
    plt.figure(figsize=(8, 8))
    plt.pie(df_filtered['StepTotal'], labels=df_filtered['ActivityHour'].dt.strftime('%H:%M'), autopct='%1.1f%%', colors=plt.cm.Paired(range(len(df_filtered))))
    plt.title('Hourly Steps on April 12, 2016')
    plt.show()

# driver
plot_daily_steps()
input("Press Enter to proceed to the next plot...")
plot_daily_distance()
input("Press Enter to proceed to the next plot...")
plot_sleep_time()
input("Press Enter to proceed to the next plot...")
plot_hourly_steps()
