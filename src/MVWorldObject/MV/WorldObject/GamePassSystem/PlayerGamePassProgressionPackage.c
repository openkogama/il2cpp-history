
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerGamePassProgressionPackage::
         PlayerGamePassProgressionPackage_ToString
                   (PlayerGamePassProgressionPackage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  arg0 = (this->fields).playerPlanetData;
  arg1 = (this->fields).playerTierStateCalculator;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_playerPlanetData__0__u000AplayerTier,(Object *)arg0,
                      (Object *)arg1,(MethodInfo *)0x0);
  return pSVar1;
}

