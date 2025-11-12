
/* ProxyLogHandler+LogFormatData(LogType, Object, String, Object[]) */

void Assembly-CSharp.dll::ProxyLogHandler+LogFormatData::ProxyLogHandler_LogFormatData__ctor
               (ProxyLogHandler_LogFormatData *this,LogType__Enum logType,Object_1 *context,
               String *format,Object__Array *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = iRam_?;
  (this->fields).LogType = logType;
  (this->fields).context = context;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).context >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).format = format;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).format >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).args = args;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).args >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}


/* String get_Message() */

String * Assembly-CSharp.dll::ProxyLogHandler+LogFormatData::
         ProxyLogHandler_LogFormatData_get_Message
                   (ProxyLogHandler_LogFormatData *this,MethodInfo *method)

{
  args = (this->fields).args;
  pSVar1 = (this->fields).format;
  if (args != (Object__Array *)0x0) {
    PStack_2._arg0 = (Object *)0x0;
    PStack_2._arg1 = (Object *)0x0;
    PStack_2._arg2 = (Object *)0x0;
    PStack_2._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3(&PStack_2,args,(MethodInfo *)0x0);
    PStack_3._arg0 = PStack_2._arg0;
    PStack_3._arg1 = PStack_2._arg1;
    PStack_3._arg2 = PStack_2._arg2;
    PStack_3._args = PStack_2._args;
    pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
    return pSVar1;
  }
  ppSVar4 = &StringLiteral_format;
  if (pSVar1 != (String *)0x0) {
    ppSVar4 = &StringLiteral_args;
  }
  pSVar1 = (String *)func_?(ppSVar4);
  uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
  this_00 = (ArgumentNullException *)func_?(uVar5);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,pSVar1,(MethodInfo *)0x0);
  uVar5 = func_?(&
                              MethodInfo__System__String__Format_MethodInfo__System__String__System__Object____
                             );
  FUN_?(this_00,uVar5);
  pcVar6 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar6)();
  return pSVar1;
}

