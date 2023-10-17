
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
    (*(pSVar4->klass->vtable).Close.methodPtr)(pSVar4,(pSVar4->klass->vtable).Close.method);
    pFVar5 = (this->fields).fs;
    if (pFVar5 != (FileStream *)0x0) {
      (*(pFVar5->klass->vtable).Close.methodPtr)(pFVar5,(pFVar5->klass->vtable).Close.method);
      uStack_3 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
    (*(pSVar1->klass->vtable).WriteLine_2.methodPtr)(pSVar1,pSVar2);
    pSVar1 = (this->fields).writer;
    if (pSVar1 != (StreamWriter *)0x0) {
      (*(pSVar1->klass->vtable).Flush.methodPtr)(pSVar1);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pFVar1 = (FileStream *)func_?(TypeInfo__System__IO__FileStream);
  if (pFVar1 != (FileStream *)0x0) {
    mscorlib.dll::System::IO::FileStream::FileStream__ctor_2
              (pFVar1,filename,FileMode__Enum_OpenOrCreate,FileAccess__Enum_Write,(MethodInfo *)0x0)
    ;
    (this->fields).fs = pFVar1;
    func_?(&this->fields,pFVar1);
    pFVar1 = (this->fields).fs;
    this_00 = (StreamWriter *)func_?(TypeInfo__System__IO__StreamWriter);
    if (this_00 != (StreamWriter *)0x0) {
      mscorlib.dll::System::IO::StreamWriter::StreamWriter__ctor_1
                (this_00,(Stream *)pFVar1,(MethodInfo *)0x0);
      (this->fields).writer = this_00;
      func_?(&(this->fields).writer,this_00);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

