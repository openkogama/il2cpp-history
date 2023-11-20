
/* Int32 GenerateKey(Int32, Int32) */

int32_t Assembly-CSharp-firstpass.dll::Assets::CodeStage::AntiCheatToolkit::Scripts::ObscuredTypes::
        CryptoKeyGenerator::CryptoKeyGenerator_GenerateKey
                  (int32_t from,int32_t to,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pCStack_1 = (CryptoKeyGenerator__Class *)
                &
                TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
    ;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator->_1
      ).cctor_finished_or_no_cctor == 0) {
    pCStack_1 = 
    TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator;
    func_?();
  }
  pRVar2 = TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
           ->static_fields->rand;
  if (pRVar2 != (Random *)0x0) {
    pCStack_1 = (CryptoKeyGenerator__Class *)(pRVar2->klass->vtable).Next_2.methodPtr;
    puStack_3 = (undefined *)to;
    iStack_4 = from;
    iVar5 = (*(code *)(pRVar2->klass->vtable).Next_1.method)(pRVar2);
    return iVar5;
  }
  pCStack_1 = (CryptoKeyGenerator__Class *)&stack0xfffffffc;
  uVar6 = func_?(&iStack_4);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  iVar5 = (*pcVar7)();
  return iVar5;
}


/* CryptoKeyGenerator() */

void Assembly-CSharp-firstpass.dll::Assets::CodeStage::AntiCheatToolkit::Scripts::ObscuredTypes::
     CryptoKeyGenerator::CryptoKeyGenerator__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                   );
    func_?(&TypeInfo__System__Random);
    cRam_? = '\x01';
  }
  this = (Random *)func_?(TypeInfo__System__Random);
  mscorlib.dll::System::Random::Random__ctor(this,(MethodInfo *)0x0);
  TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator->
  static_fields->rand = this;
  func_?(TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                  ->static_fields,this);
  return;
}

