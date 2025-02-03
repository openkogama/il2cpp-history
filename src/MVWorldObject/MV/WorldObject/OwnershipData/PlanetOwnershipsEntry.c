
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::OwnershipData::PlanetOwnershipsEntry::
         PlanetOwnershipsEntry_ToString(PlanetOwnershipsEntry *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__Common__PlanetOwnershipType);
    func_?(&StringLiteral__0____1__);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  iStack_2 = (this->fields).profileID;
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
  this = (PlanetOwnershipsEntry *)CONCAT13((pPVar1->fields).planetOwnership,this._0_3_);
  arg1 = (Object *)func_?(TypeInfo__MV__Common__PlanetOwnershipType,(int)&this + 3);
  pSVar3 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral__0____1__,arg0,arg1,(MethodInfo *)0x0);
  return pSVar3;
}

