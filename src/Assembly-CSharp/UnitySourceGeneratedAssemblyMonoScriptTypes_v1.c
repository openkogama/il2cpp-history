
/* UnitySourceGeneratedAssemblyMonoScriptTypes_v1+MonoScriptData Get() */

UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData *
Assembly-CSharp.dll::UnitySourceGeneratedAssemblyMonoScriptTypes_v1::
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get
          (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData *__return_storage_ptr__,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&_74A73320DAC63813679EA0D93EBA7095F54915B457CCB914A904F1BB4BE2B84A_Field);
    LOCK();
    UNLOCK();
    FUN_?(&C2ACEB608A09699E4AD09C8E33360EE9C79B48AEC943250A268829650E7F614D_Field);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->FilePathsData = (Byte__Array *)0x0;
  __return_storage_ptr__->TypesData = (Byte__Array *)0x0;
  __return_storage_ptr__->TotalTypes = 0;
  __return_storage_ptr__->TotalFiles = 0;
  *(undefined8 *)&__return_storage_ptr__->IsEditorOnly = 0;
  pBVar1 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,0x2b0df);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pBVar1,
             __74A73320DAC63813679EA0D93EBA7095F54915B457CCB914A904F1BB4BE2B84A_Field,
             (MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  __return_storage_ptr__->FilePathsData = pBVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)__return_storage_ptr__ >> 0xc);
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
  pBVar1 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,0x153eb);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pBVar1,_C2ACEB608A09699E4AD09C8E33360EE9C79B48AEC943250A268829650E7F614D_Field
             ,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  __return_storage_ptr__->TypesData = pBVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&__return_storage_ptr__->TypesData >> 0xc);
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
  __return_storage_ptr__->TotalFiles = 0x81c;
  __return_storage_ptr__->TotalTypes = 0xaaa;
  __return_storage_ptr__->IsEditorOnly = 0;
  return __return_storage_ptr__;
}

