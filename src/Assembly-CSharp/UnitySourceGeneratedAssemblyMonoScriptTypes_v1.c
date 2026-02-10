
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
    FUN_?(&_1482AF18A258E527F7BDBDA149CD0D49CFB9AE1A0E0B296BAD9C419B885F0DEA_Field);
    LOCK();
    UNLOCK();
    FUN_?(&E760F7205DC2C36B91EF3EBE636FF88428115294D08F0153012D71D759E98597_Field);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->FilePathsData = (Byte__Array *)0x0;
  __return_storage_ptr__->TypesData = (Byte__Array *)0x0;
  __return_storage_ptr__->TotalTypes = 0;
  __return_storage_ptr__->TotalFiles = 0;
  *(undefined8 *)&__return_storage_ptr__->IsEditorOnly = 0;
  pBVar1 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,0x2b125);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pBVar1,_E760F7205DC2C36B91EF3EBE636FF88428115294D08F0153012D71D759E98597_Field
             ,(MethodInfo *)0x0);
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
  pBVar1 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,0x15406);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pBVar1,
             __1482AF18A258E527F7BDBDA149CD0D49CFB9AE1A0E0B296BAD9C419B885F0DEA_Field,
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
  __return_storage_ptr__->TotalFiles = 0x81d;
  __return_storage_ptr__->TotalTypes = 0xaab;
  __return_storage_ptr__->IsEditorOnly = 0;
  return __return_storage_ptr__;
}

