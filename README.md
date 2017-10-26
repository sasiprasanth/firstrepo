# Word Segmentation in Sanskrit Using Energy Based Models

This is the repo containing the codes, training-data and testing-data for word segmentation in sanskrit using energy based model (EBM)

## Getting Started

Please download all the contents of this repository to your working directory 
Extract the rar files as folders into the working directory

Your working directory should be as follows
* Working Directory
  * wordsegmentation
    * skt_dcs_DS.bz2_4K_bigram_mir_10K
    * skt_dcs_DS.bz2_4K_bigram_mir_heldout
  * outputs
    * train_t7978754709018
  * Train_clique.py
  * test_clique.py
  * all other python files and text files provided in the repo
  

## Prerequisites
* Python3
  * scipy
  * numpy
  * csv
  * pickle
  * multiprocessing
  * bz2
## Instructions for Training


Run the file Train_clique.py by using the following command

* python Train_clique.py

To train on different input features like BM2,BM3,BR2,BR3,PM2,PM3,PR,PR3 please modify the bz2_input_folder value in the main function before beginning the training.

Feature  | bz2_input_folder
------------- | -------------
BM2 | wordsegmentation/skt_dcs_DS.bz2_4K_bigram_mir_10K/
BM3 | wordsegmentation/skt_dcs_DS.bz2_1L_bigram_mir_10K
BR2 | wordsegmentation/skt_dcs_DS.bz2_4K_bigram_rfe_10K/
BR3 | wordsegmentation/skt_dcs_DS.bz2_1L_bigram_rfe_10K/
PM2 | wordsegmentation/skt_dcs_DS.bz2_4K_pmi_mir_10K/
PM3 | wordsegmentation/skt_dcs_DS.bz2_1L_pmi_mir_10K2/
PR2 | wordsegmentation/skt_dcs_DS.bz2_4K_pmi_rfe_10K/
PR3 | wordsegmentation/skt_dcs_DS.bz2_1L_pmi_rfe_10K/

## Instructions for Testing
After training, please modify the 'modelList' dictionary  in 'test_clique.py' with the name of the neural network that has been saved during training. While testing for a feature, please provide the name of the neural net which was trained
for the same feature.

To test with a particular feature vector use the tag of the feature while execution

* python test_clique.py -t <tag>

For example: 
  * python test_clique.py -t BM2

After finishing the testing please run the following command to see the precision and recall values for both the word and word++ prediction tasks

* python evaluate.py <tag>
 
For example: 
  * python evaluate.py BM2


