
/* Void Finalize() */

void Assembly-CSharp.dll::LogFileAppender::LogFileAppender_Finalize
               (LogFileAppender *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  func_?();
  uStack_1 = 0;
  pSVar4 = (this->fields).writer;
  if (pSVar4 != (StreamWriter *)0x0) {
    (*(code *)(pSVar4->klass->vtable).Close.method)
              (pSVar4,(pSVar4->klass->vtable).Dispose_1.methodPtr);
    pFVar5 = (this->fields).fs;
    if (pFVar5 != (FileStream *)0x0) {
      (*(code *)(pFVar5->klass->vtable).Close.method)
                (pFVar5,(pFVar5->klass->vtable).Flush.methodPtr);
      uStack_1 = 0xffffffff;
      ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,(MethodInfo *)0x22)
      ;
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
  func_?(0);
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Log(String, String) */

void Assembly-CSharp.dll::LogFileAppender::LogFileAppender_Log
               (LogFileAppender *this,String *loggerName,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).writer;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  this_00 = (FileStream *)func_?(TypeInfo__System__IO__FileStream);
  mscorlib.dll::System::IO::FileStream::FileStream__ctor_2
            (this_00,filename,FileMode__Enum_OpenOrCreate,FileAccess__Enum_Write,(MethodInfo *)0x0);
  (this->fields).fs = this_00;
  this_01 = (StreamWriter *)func_?(TypeInfo__System__IO__StreamWriter);
  mscorlib.dll::System::IO::StreamWriter::StreamWriter__ctor
            (this_01,(Stream *)this_00,(MethodInfo *)0x0);
  (this->fields).writer = this_01;
  return;
}

