# Streaming Data Usage - Design 
Name: ASYIQ AFIQAH BINTI MOHD ASRI   Matric No: B032610261   Section: S2G2  
  
## Step 1: Analysis 
Input   : streaming bitrate in megabits per second: bitrateMbps; duration in minutes: durationInMinutes
Process : convert duration to seconds: seconds = durationInMinutes *60
          calculate total megabits: totalMb = bitrateMbps * TotalSeconds
          convert megabits to megabytes: dataMB = totalMb / 8
          convert megabytes to gigabytes: dataGB = dataMB / 1024
Output  : data used in megabytes: dataMB
          data used in gigabytes: dataGB
  
Structure chart (module names and jobs): 

## Step 2: Design 
### Pseudocode 
main 
    CALL inputBitrate RETURNING bitrateMbps 
    CALL inputMinutes RETURNING durationInMinutes
    CALL computeDataMB with bitrateMbps and durationInMinutes RETURNING dataMB and dataGB 
    CALL display dataGB and dataMB
  
inputBitrate 
    DISPLAY prompt for the streaming bitrate in megabits per second
    READ bitrateMbps
    RETURN bitrateMbps 
  
inputMinutes 
    DISPLAY prompt for duration in minutes 
    READ durationInMinutes
    RETURN durationInMinutes
  
computeDataMB with bitrateMbps and durationInMinutes 
    COMPUTE durationInSeconds as durationInMinutes*60       (1 minute=60 seconds)
    COMPUTE totalMb as bitrateMbps*Totalsecond  
    COMPUTE dataMB as totalMb / 8                          (1 Megabyte = 1 Megabit)
    COMPUTE dataGB as dataMB / 1024                        (1 Gigabyte = 1024 Megabyte)
    RETURN dataMB 
  
display with dataMB 
    COMPUTE dataGB as dataMB / 1024
    DISPLAY dataMB as data used in Megabytes
    DISPLAY dataGB as data used in Gigabytes

### Flowchart 
See StreamingData_flowchart.png 
  
### Desk-check 
| Test | bitrateMbps | minutes | seconds | dataMb | dataMB | dataGB | 
|------|-------------|---------|---------|--------|--------|--------| 
| 1    | 2.5         | 90      |         |        |        |        | 
| 2    |             |         |         |        |        |        | 
| 3    | 0           | 60      |         |        |        |        | 
  
## Step 4: Testing 
| Test | Expected (MB / GB) | Actual output | Pass? | 
|------|--------------------|---------------|-------| 
| 1    |                    |               |       | 
| 2    |                    |               |       | 
| 3    |                    |               |       |