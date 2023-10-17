
/* String GetMD5Hash(SortedDictionary`2[System.String,System.String], String) */

String * MVWorldObject.dll::MV::WorldObject::Security::Encryption::Encryption_GetMD5Hash
                   (SortedDictionary_2_System_String_System_String_ *formArgs,String *secretKey,
                   MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__SortedDictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__SortedDictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__SortedDictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::String>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::String>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__SortedDictionary<System::String,_System::String>__Add_System__String__System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__SortedDictionary<System::String,_System::String>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__SortedDictionary<System::String,_System::String>__Remove_System__String_
                   );
    func_?(&StringLiteral__0___1_);
    func_?(&StringLiteral_secret_key);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (formArgs != (SortedDictionary_2_System_String_System_String_ *)0x0) {
    System.dll::System::Collections::Generic::SortedDictionary`2[System::Object,System::Object]::
    SortedDictionary_2_System_Object_System_Object__Add
              ((SortedDictionary_2_System_Object_System_Object_ *)formArgs,
               (Object *)StringLiteral_secret_key,(Object *)secretKey,
               MethodInfo__System__Collections__Generic__SortedDictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar4 = ::StringLiteral__;
    System.dll::System::Collections::Generic::SortedDictionary`2[System::Object,System::Object]::
    SortedDictionary_2_System_Object_System_Object__GetEnumerator
              ((SortedDictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)&pSStack_5
               ,(SortedDictionary_2_System_Object_System_Object_ *)formArgs,
               MethodInfo__System__Collections__Generic__SortedDictionary<System::String,_System::String>__GetEnumerator__
              );
    uStack_1 = 1;
    while( true ) {
      bVar6 = System.dll::System::Collections::Generic::
              SortedDictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              SortedDictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        ((SortedDictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                         &stack0xffffffa4,
                         MethodInfo__System__Collections__Generic__SortedDictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                        );
      if (bVar6 == 0) break;
      KVar7 = System.dll::System::Collections::Generic::
              SortedDictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              SortedDictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__get_Current
                        ((SortedDictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                         &stack0xffffffa4,
                         MethodInfo__System__Collections__Generic__SortedDictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__get_Current__
                        );
      bVar6 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
      if (bVar6 == 0) {
        pSVar4 = mscorlib.dll::System::String::String_Concat_3
                           (pSVar4,::StringLiteral__,(MethodInfo *)0x0);
      }
      str1 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral__0___1_,KVar7.key,KVar7.value,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_3(pSVar4,str1,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    System.dll::System::Collections::Generic::SortedDictionary`2[TKey,TValue]+Enumerator[System::
    Object,System::Object]::
    SortedDictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__Dispose
              ((SortedDictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
               &stack0xffffffa4,
               MethodInfo__System__Collections__Generic__SortedDictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__Dispose__
              );
    uStack_1 = 0xffffffff;
    System.dll::System::Collections::Generic::SortedDictionary`2[System::Object,System::Object]::
    SortedDictionary_2_System_Object_System_Object__Remove
              ((SortedDictionary_2_System_Object_System_Object_ *)formArgs,
               (Object *)StringLiteral_secret_key,
               MethodInfo__System__Collections__Generic__SortedDictionary<System::String,_System::String>__Remove_System__String_
              );
    pSVar4 = Encryption_GetMD5Hash_1(pSVar4,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return pSVar4;
  }
  uVar8 = func_?();
  func_?(uVar8);
  pcVar9 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar9)();
  return pSVar4;
}


/* String GetMD5Hash(String) */

String * MVWorldObject.dll::MV::WorldObject::Security::Encryption::Encryption_GetMD5Hash_1
                   (String *s,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Security__Cryptography__MD5CryptoServiceProvider);
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&StringLiteral_x2);
    cRam_? = '\x01';
  }
  this = (MD5CryptoServiceProvider *)
         func_?(TypeInfo__System__Security__Cryptography__MD5CryptoServiceProvider);
  if (this != (MD5CryptoServiceProvider *)0x0) {
    mscorlib.dll::System::Security::Cryptography::MD5CryptoServiceProvider::
    MD5CryptoServiceProvider__ctor(this,(MethodInfo *)0x0);
    uStack_1 = 1;
    pEVar4 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
    if (pEVar4 != (Encoding *)0x0) {
      pBVar5 = (Byte__Array *)(*(pEVar4->klass->vtable).GetBytes_1.methodPtr)();
      if (this != (MD5CryptoServiceProvider *)0x0) {
        pBVar5 = mscorlib.dll::System::Security::Cryptography::HashAlgorithm::
                 HashAlgorithm_ComputeHash((HashAlgorithm *)this,pBVar5,(MethodInfo *)0x0);
        this_00 = (StringBuilder *)func_?();
        if (this_00 != (StringBuilder *)0x0) {
          mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this_00,(MethodInfo *)0x0);
          uVar6 = 0;
          if (pBVar5 != (Byte__Array *)0x0) {
            while( true ) {
              if ((int)pBVar5->max_length <= (int)uVar6) {
                pSVar7 = (String *)(*(this_00->klass->vtable).ToString.methodPtr)();
                uStack_1 = 0xffffffff;
                if (this != (MD5CryptoServiceProvider *)0x0) {
                  func_?();
                  *unaff_FS_OFFSET = uStack_3;
                  return pSVar7;
                }
                *unaff_FS_OFFSET = uStack_3;
                return pSVar7;
              }
              if (pBVar5->max_length <= uVar6) break;
              pSVar7 = mscorlib.dll::System::Byte::Byte_ToString_1
                                 ((Byte *)(pBVar5->vector + uVar6),StringLiteral_x2,
                                  (MethodInfo *)0x0);
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                        (this_00,pSVar7,(MethodInfo *)0x0);
              uVar6 = uVar6 + 1;
            }
            func_?();
          }
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  pSVar7 = (String *)(*pcVar8)();
  return pSVar7;
}

