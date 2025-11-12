
/* Void Finalize() */

void Assembly-CSharp.dll::LogFileAppender::LogFileAppender_Finalize
               (LogFileAppender *this,MethodInfo *method)

{
  pSVar1 = (this->fields).writer;
  if (pSVar1 != (StreamWriter *)0x0) {
    (*(pSVar1->klass->vtable).Close.methodPtr)(pSVar1,(pSVar1->klass->vtable).Close.method);
    pFVar2 = (this->fields).fs;
    if (pFVar2 != (FileStream *)0x0) {
      (*(pFVar2->klass->vtable).Close.methodPtr)(pFVar2,(pFVar2->klass->vtable).Close.method);
      return;
    }
    FUN_?();
  }
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Log(String, String) */

void Assembly-CSharp.dll::LogFileAppender::LogFileAppender_Log
               (LogFileAppender *this,String *loggerName,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).writer;
  pSVar2 = mscorlib.dll::System::String::String_Concat_5
                     (loggerName,::StringLiteral___,message,(MethodInfo *)0x0);
  if (pSVar1 != (StreamWriter *)0x0) {
    (*(pSVar1->klass->vtable).WriteLine_1.methodPtr)
              (pSVar1,pSVar2,(pSVar1->klass->vtable).WriteLine_1.method);
    pSVar1 = (this->fields).writer;
    if (pSVar1 != (StreamWriter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pSVar1->klass->vtable).Flush.methodPtr)(pSVar1,(pSVar1->klass->vtable).Flush.method);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* LogFileAppender(String) */

void Assembly-CSharp.dll::LogFileAppender::LogFileAppender__ctor
               (LogFileAppender *this,String *filename,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IO__FileStream);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IO__StreamWriter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = (FileStream *)FUN_?(TypeInfo__System__IO__FileStream);
  mscorlib.dll::System::IO::FileStream::FileStream__ctor_8
            (pFVar1,filename,FileMode__Enum_OpenOrCreate,FileAccess__Enum_Write,FileShare__Enum_None
             ,0x1000,0,FileOptions__Enum_None,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).fs = pFVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pFVar1 = (this->fields).fs;
  this_00 = (StreamWriter *)FUN_?(TypeInfo__System__IO__StreamWriter);
  mscorlib.dll::System::IO::StreamWriter::StreamWriter__ctor_1
            (this_00,(Stream *)pFVar1,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).writer = this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).writer >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}

