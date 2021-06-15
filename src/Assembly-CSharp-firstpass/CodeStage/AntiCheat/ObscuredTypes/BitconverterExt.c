
/* Byte[] GetBytes(Decimal) */

Byte__Array *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::BitconverterExt::
BitconverterExt_GetBytes(Decimal dec,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Decimal->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Decimal->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Decimal);
  }
  pIVar1 = mscorlib.dll::System::Decimal::Decimal_GetBits(dec,(MethodInfo *)0x0);
  this = (List_1_VoxelHit_ *)
         func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this,
             MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
  uVar2 = 0;
  if (pIVar1 != (Int32__Array *)0x0) {
    piVar3 = pIVar1->vector;
    for (; (int)uVar2 < (int)pIVar1->max_length; uVar2 = uVar2 + 1) {
      if (pIVar1->max_length <= uVar2) goto code_?;
      value = *piVar3;
      if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
        func_?();
      }
      pBVar4 = mscorlib.dll::System::BitConverter::BitConverter_GetBytes_2(value,(MethodInfo *)0x0);
      if (this == (List_1_VoxelHit_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__AddRange
                (this,(IEnumerable_1_VoxelHit_ *)pBVar4,
                 MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                );
      piVar3 = piVar3 + 1;
    }
    if (this != (List_1_VoxelHit_ *)0x0) {
      pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
               List_1_VoxelHit__ToArray
                         (this,
                          MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
      return (Byte__Array *)pVVar5;
    }
  }
code_?:
  func_?();
code_?:
  uVar6 = func_?();
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  pBVar4 = (Byte__Array *)(*pcVar7)();
  return pBVar4;
}


/* Decimal ToDecimal(Byte[]) */

Decimal * Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::BitconverterExt::
          BitconverterExt_ToDecimal
                    (Decimal *__return_storage_ptr__,Byte__Array *bytes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (bytes != (Byte__Array *)0x0) {
    if (bytes->max_length != 0x10) goto code_?;
    iVar1 = func_?(TypeInfo__System__Int32,4);
    startIndex = 0;
    while( true ) {
      if ((((uint)(TypeInfo__System__BitConverter->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__BitConverter->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__BitConverter);
      }
      iVar2 = mscorlib.dll::System::BitConverter::BitConverter_ToInt32
                        (bytes,startIndex,(MethodInfo *)0x0);
      if (iVar1 == 0) break;
      func_?((int)(startIndex + (startIndex >> 0x1f & 3U)) >> 2,iVar2);
      startIndex = startIndex + 4;
      if (0xf < startIndex) {
        __return_storage_ptr__->flags = 0;
        __return_storage_ptr__->hi = 0;
        __return_storage_ptr__->lo = 0;
        __return_storage_ptr__->mid = 0;
        func_?(__return_storage_ptr__,iVar1,0);
        return __return_storage_ptr__;
      }
    }
  }
  func_?(0);
code_?:
  this = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this,StringLiteral__ACTk__A_decimal_must_be_created,(MethodInfo *)0x0);
  func_?(this,0,
                  MethodInfo__CodeStage__AntiCheat__ObscuredTypes__BitconverterExt__ToDecimal_System__Byte____
                 );
  pcVar3 = (code *)swi(3);
  pDVar4 = (Decimal *)(*pcVar3)();
  return pDVar4;
}

