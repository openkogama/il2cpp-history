
/* ExceptionSpec(String, String, List`1[Sentry.StackTraceSpec]) */

void Assembly-CSharp.dll::Sentry::ExceptionSpec::ExceptionSpec__ctor
               (ExceptionSpec *this,String *type,String *value,
               List_1_Sentry_StackTraceSpec_ *stacktrace,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Sentry__StackTraceContainer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).type = type;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
  (this->fields).value = value;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).value >> 0xc);
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
  pSVar7 = (StackTraceContainer *)FUN_?(TypeInfo__Sentry__StackTraceContainer);
  iVar1 = iRam_?;
  (pSVar7->fields).frames = stacktrace;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&pSVar7->fields >> 0xc);
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
  (this->fields).stacktrace = pSVar7;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).stacktrace >> 0xc);
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

