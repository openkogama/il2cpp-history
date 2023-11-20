
/* Byte[] GetBytes(Decimal) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::BitconverterExt::
BitconverterExt_GetBytes(Decimal dec,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Decimal);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Decimal->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Decimal);
  }
  auVar1 = dec._0_16_;
  d.ulomidLE._0_4_ = 0;
  d.flags = auVar1._0_4_;
  d.hi = auVar1._4_4_;
  d.lo = auVar1._8_4_;
  d.mid = auVar1._12_4_;
  d.ulomidLE._4_4_ = unaff_EDI;
  pIVar2 = mscorlib.dll::System::Decimal::Decimal_GetBits(d,unaff_ESI);
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
  if (pIVar2 != (Int32__Array *)0x0) {
    if ((int)pIVar2->max_length < 1) {
      if (this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)0x0) {
        pMVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                 List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                           (this,
                            MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__
                           );
        return (Byte__Array *)pMVar3;
      }
    }
    else {
      if (pIVar2->max_length == 0) goto code_?;
      mscorlib.dll::System::BitConverter::BitConverter_GetBytes_3
                (pIVar2->vector[0],(MethodInfo *)0x0);
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pBVar5 = (Byte__Array *)(*pcVar4)();
  return pBVar5;
}


/* Decimal ToDecimal(Byte[]) */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::BitconverterExt::
          BitconverterExt_ToDecimal
                    (Decimal *__return_storage_ptr__,Byte__Array *bytes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  if (bytes != (Byte__Array *)0x0) {
    if (bytes->max_length != 0x10) goto code_?;
    bits = (Int32__Array *)func_?(TypeInfo__System__Int32,4);
    startIndex = 0;
    while( true ) {
      uVar1 = mscorlib.dll::System::BitConverter::BitConverter_ToUInt32
                        (bytes,startIndex,(MethodInfo *)0x0);
      if (bits == (Int32__Array *)0x0) break;
      uVar2 = (int)(startIndex + (startIndex >> 0x1f & 3U)) >> 2;
      if (bits->max_length <= uVar2) goto code_?;
      startIndex = startIndex + 4;
      bits->vector[uVar2] = uVar1;
      if (0xf < startIndex) {
        __return_storage_ptr__->flags = 0;
        __return_storage_ptr__->hi = 0;
        __return_storage_ptr__->lo = 0;
        __return_storage_ptr__->mid = 0;
        mscorlib.dll::System::Decimal::Decimal__ctor_6
                  (__return_storage_ptr__,bits,(MethodInfo *)0x0);
        return __return_storage_ptr__;
      }
    }
  }
  func_?();
code_?:
  func_?();
code_?:
  uVar3 = func_?(&TypeInfo__System__Exception);
  this = (Exception *)func_?(uVar3);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral__ACTk__A_decimal_must_be_created);
  mscorlib.dll::System::Exception::Exception__ctor_1(this,message,method_00);
  uVar3 = func_?(&
                          MethodInfo__CodeStage__AntiCheat__ObscuredTypes__BitconverterExt__ToDecimal_System__Byte____
                         );
  func_?(this,uVar3);
  pcVar4 = (code *)swi(3);
  pDVar5 = (Decimal *)(*pcVar4)();
  return pDVar5;
}

