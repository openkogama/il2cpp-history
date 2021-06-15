
/* Int32 GenerateKey(Int32, Int32) */

int32_t Assembly-CSharp-firstpass.dll::Assets::CodeStage::AntiCheatToolkit::Scripts::ObscuredTypes::
        CryptoKeyGenerator::CryptoKeyGenerator_GenerateKey
                  (int32_t from,int32_t to,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(
              TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
              ->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator->_1
      ).cctor_started == 0)) {
    func_?(
                   TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                   );
  }
  pRVar1 = TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
           ->static_fields->rand;
  if (pRVar1 != (Random *)0x0) {
    iVar2 = (*(code *)(pRVar1->klass->vtable).Next_2.method)
                      (pRVar1,from,to,pRVar1->klass[1]._0.image);
    return iVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  iVar2 = (*pcVar3)();
  return iVar2;
}


/* CryptoKeyGenerator() */

void Assembly-CSharp-firstpass.dll::Assets::CodeStage::AntiCheatToolkit::Scripts::ObscuredTypes::
     CryptoKeyGenerator::CryptoKeyGenerator__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Random *)func_?(TypeInfo__System__Random);
  mscorlib.dll::System::Random::Random__ctor(this,(MethodInfo *)0x0);
  TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator->
  static_fields->rand = this;
  return;
}

