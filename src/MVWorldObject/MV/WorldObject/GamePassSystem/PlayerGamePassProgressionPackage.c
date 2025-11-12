
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage::
         PlayerGamePassProgressionPackage_ToString
                   (PlayerGamePassProgressionPackage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_playerPlanetData__0__u000AplayerTier);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_playerPlanetData__0__u000AplayerTier;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
            (&PStack_2,(Object *)(this->fields).playerPlanetData,
             (Object *)(this->fields).playerTierStateCalculator,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}

