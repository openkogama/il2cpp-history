
/* Void Finalize() */

void Assembly-CSharp.dll::LogFileAppender::LogFileAppender_Finalize
               (LogFileAppender *this,MethodInfo *method)

{
  puStack_1 = &DAT_?;
  uStack_2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_2;
  uStack_3 = 1;
  pSVar4 = (this->fields).writer;
  if (pSVar4 != (StreamWriter *)0x0) {
    (*(code *)(pSVar4->klass->vtable).Close.method)
              (pSVar4,(pSVar4->klass->vtable).Dispose_1.methodPtr);
    pFVar5 = (this->fields).fs;
    if (pFVar5 != (FileStream *)0x0) {
      (*(code *)(pFVar5->klass->vtable).Close.method)
                (pFVar5,(pFVar5->klass->vtable).Dispose_1.methodPtr);
      uStack_3 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
      *unaff_FS_OFFSET = uStack_2;
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Log(String, String) */

void Assembly-CSharp.dll::LogFileAppender::LogFileAppender_Log
               (LogFileAppender *this,String *loggerName,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral___);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).writer;
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (loggerName,::StringLiteral___,message,(MethodInfo *)0x0);
  if (pSVar1 != (StreamWriter *)0x0) {
    (*(code *)(pSVar1->klass->vtable).WriteLine_1.method)(pSVar1,pSVar2);
    pSVar1 = (this->fields).writer;
    if (pSVar1 != (StreamWriter *)0x0) {
      (*(code *)(pSVar1->klass->vtable).Flush.method)(pSVar1);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* LogFileAppender(String) */

void Assembly-CSharp.dll::LogFileAppender::LogFileAppender__ctor
               (LogFileAppender *this,String *filename,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IO__FileStream);
    func_?(&TypeInfo__System__IO__StreamWriter);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pFVar1 = (FileStream *)func_?(TypeInfo__System__IO__FileStream);
  mscorlib.dll::System::IO::FileStream::FileStream__ctor_2
            (pFVar1,filename,FileMode__Enum_OpenOrCreate,FileAccess__Enum_Write,(MethodInfo *)0x0);
  (this->fields).fs = pFVar1;
  func_?(&this->fields,pFVar1);
  pFVar1 = (this->fields).fs;
  this_00 = (StreamWriter *)func_?(TypeInfo__System__IO__StreamWriter);
  mscorlib.dll::System::IO::StreamWriter::StreamWriter__ctor_1
            (this_00,(Stream *)pFVar1,(MethodInfo *)0x0);
  (this->fields).writer = this_00;
  func_?(&(this->fields).writer,this_00);
  return;
}

