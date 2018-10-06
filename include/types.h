#ifndef LCFINDER_TYPES_H
#define LCFINDER_TYPES_H

/** �ļ������� */
typedef struct FileIteratorRec_* FileIterator;
typedef struct FileIteratorRec_ {
	unsigned int index;		/**< ��ǰ����λ�� */
	unsigned int length;		/**< �ļ��б��ܳ��� */
	void *privdata;			/**< ˽������ */
	char *filepath;			/**< �ļ�·�� */
	void(*next)(FileIterator);	/**< �л�����һ���ļ� */
	void(*prev)(FileIterator);	/**< �л�����һ���ļ� */
	void(*destroy)(FileIterator);	/**< �����ļ������� */
} FileIteratorRec;

typedef void(*FileIteratorFunc)(FileIterator);

#endif
