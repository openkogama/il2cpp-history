
/* Int32 GenerateKey(Int32, Int32) */

int32_t Assembly-CSharp-firstpass.dll::Assets::CodeStage::AntiCheatToolkit::Scripts::ObscuredTypes::
        CryptoKeyGenerator::CryptoKeyGenerator_GenerateKey
                  (int32_t from,int32_t to,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(
               TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
               ->_1).field_0x1c == 0) {
    FUN_?(
                 TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                 );
  }
  pRVar1 = TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
           ->static_fields->rand;
  if (pRVar1 != (Random *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*(pRVar1->klass->vtable).Next_1.methodPtr)
                      (pRVar1,(ulonglong)(uint)from,(ulonglong)(uint)to,
                       (pRVar1->klass->vtable).Next_1.method);
    return iVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar2 = (*pcVar3)();
  return iVar2;
}


/* CryptoKeyGenerator() */

void Assembly-CSharp-firstpass.dll::Assets::CodeStage::AntiCheatToolkit::Scripts::ObscuredTypes::
     CryptoKeyGenerator::CryptoKeyGenerator__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Random);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Random *)FUN_?(TypeInfo__System__Random);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Random);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Random->_1).field_0x1c == 0) {
    FUN_?();
  }
  Seed = mscorlib.dll::System::Random::Random_GenerateSeed((MethodInfo *)0x0);
  mscorlib.dll::System::Random::Random__ctor_1(this,Seed,(MethodInfo *)0x0);
  TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator->
  static_fields->rand = this;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   TypeInfo__Assets__CodeStage__AntiCheatToolkit__Scripts__ObscuredTypes__CryptoKeyGenerator
                   ->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}

