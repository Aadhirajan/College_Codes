def frequency_words(path):
    freq_dict={}
    with open(path,'r') as pt:
        contents=pt.read()
        words=contents.split()
        for word in words:
            word=word.lower()
            if word in freq_dict:
                freq_dict[word]+=1
            else:
                freq_dict[word]=1
        return freq_dict
def main():
    path='commentary.txt'
    frequency=frequency_words(path)
    for word,freq in frequency.items():
        print(f"Word:{word},Frequency:{freq}")
if __name__=='__main__':
    main()