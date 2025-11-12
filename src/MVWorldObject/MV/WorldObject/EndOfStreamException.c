
/* EndOfStreamException() */

void MVWorldObject.dll::MV::WorldObject::EndOfStreamException::EndOfStreamException_1__ctor
               (EndOfStreamException_1 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Exception);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Exception->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Runtime__Serialization__SafeSerializationManager,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields)._._message = (String *)0x0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._message >> 0xc);
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
  (this->fields)._._stackTrace = (Object *)0x0;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._stackTrace >> 0xc);
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
  (this->fields)._._dynamicMethods = (Object *)0x0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._dynamicMethods >> 0xc);
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
  (this->fields)._._HResult = -0x7feceb00;
  pSVar8 = (SafeSerializationManager *)
           FUN_?(TypeInfo__System__Runtime__Serialization__SafeSerializationManager);
  bVar6 = iRam_? != 0;
  (this->fields)._._safeSerializationManager = pSVar8;
  if (bVar6) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._safeSerializationManager >> 0xc);
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


/* EndOfStreamException(String) */

void MVWorldObject.dll::MV::WorldObject::EndOfStreamException::EndOfStreamException_1__ctor_1
               (EndOfStreamException_1 *this,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Exception);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Exception->_1).field_0x1c == 0) {
    FUN_?();
  }
  mscorlib.dll::System::Exception::Exception_Init((Exception *)this,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._._message = message;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._message >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* EndOfStreamException(SerializationInfo, StreamingContext) */

void MVWorldObject.dll::MV::WorldObject::EndOfStreamException::EndOfStreamException_1__ctor_2
               (EndOfStreamException_1 *this,SerializationInfo *info,StreamingContext *context,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Exception);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Exception->_1).field_0x1c == 0) {
    FUN_?();
  }
  SStack_1.m_additionalContext = context->m_additionalContext;
  SStack_1.m_state = context->m_state;
  SStack_1._12_4_ = *(undefined4 *)&context->field_0xc;
  mscorlib.dll::System::Exception::Exception__ctor_3
            ((Exception *)this,info,&SStack_1,(MethodInfo *)0x0);
  return;
}

