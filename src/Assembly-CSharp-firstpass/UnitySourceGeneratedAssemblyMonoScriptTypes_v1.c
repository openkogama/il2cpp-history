
/* UnitySourceGeneratedAssemblyMonoScriptTypes_v1+MonoScriptData Get() */

UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_3 *
Assembly-CSharp-firstpass.dll::UnitySourceGeneratedAssemblyMonoScriptTypes_v1::
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_3_Get
          (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_3 *__return_storage_ptr__,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&_8B5849F4618721830F1DE9511F27C52AEFCEDE525D7F4AA1C8C5F7B2ADB5E5DF_Field);
    LOCK();
    UNLOCK();
    FUN_?(&_9E73BE037E90043CA39B9BE1A6E8E6671255D39D59759C26CBAC22DA9D5208DE_Field);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->FilePathsData = (Byte__Array *)0x0;
  __return_storage_ptr__->TypesData = (Byte__Array *)0x0;
  __return_storage_ptr__->TotalTypes = 0;
  __return_storage_ptr__->TotalFiles = 0;
  *(undefined8 *)&__return_storage_ptr__->IsEditorOnly = 0;
  pBVar1 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,0xd21);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pBVar1,
             __9E73BE037E90043CA39B9BE1A6E8E6671255D39D59759C26CBAC22DA9D5208DE_Field,
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
  pBVar1 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,0x84f);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pBVar1,
             __8B5849F4618721830F1DE9511F27C52AEFCEDE525D7F4AA1C8C5F7B2ADB5E5DF_Field,
             (MethodInfo *)0x0);
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
  __return_storage_ptr__->TotalFiles = 0x27;
  __return_storage_ptr__->TotalTypes = 0x2f;
  __return_storage_ptr__->IsEditorOnly = 0;
  return __return_storage_ptr__;
}

