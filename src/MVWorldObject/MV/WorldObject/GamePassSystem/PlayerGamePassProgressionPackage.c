
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage::
         PlayerGamePassProgressionPackage_ToString
                   (PlayerGamePassProgressionPackage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_playerPlanetData__0__u000AplayerTier);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_playerPlanetData__0__u000AplayerTier,
                      (Object *)(this->fields).playerPlanetData,
                      (Object *)(this->fields).playerTierStateCalculator,(MethodInfo *)0x0);
  return pSVar1;
}

