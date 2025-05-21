
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::OwnershipData::PlanetOwnershipsData::
         PlanetOwnershipsData_ToString(PlanetOwnershipsData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__get_Item_int_
                   );
    func_?(&TypeInfo__MV__Common__PlanetOwnershipType);
    func_?(&StringLiteral__0____1__u000A);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  index = 0;
  pSStack_2 = ::StringLiteral__;
  pLVar3 = (this->fields).planetOwnerships;
  if (pLVar3 != (List_1_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_ *)0x0) {
    while( true ) {
      if ((pLVar3->fields)._size <= index) {
        return pSStack_2;
      }
      pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pPVar1->fields).planetOwnerships;
      if ((pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar4,index,
                             MethodInfo__System__Collections__Generic__List<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__get_Item_int_
                            ), RVar5 == (RegexCharClass_SingleRange)0x0)) break;
      uStack_6 = *(undefined4 *)((int)RVar5 + 8);
      arg0 = (Object *)func_?(TypeInfo__System__Int32,&uStack_6);
      pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pPVar1->fields).planetOwnerships;
      if ((pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar4,index,
                             MethodInfo__System__Collections__Generic__List<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__get_Item_int_
                            ), RVar5 == (RegexCharClass_SingleRange)0x0)) break;
      this = (PlanetOwnershipsData *)CONCAT13(*(undefined1 *)((int)RVar5 + 0xc),this._0_3_);
      arg1 = (Object *)func_?(TypeInfo__MV__Common__PlanetOwnershipType,(int)&this + 3);
      pSVar7 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral__0____1__u000A,arg0,arg1,(MethodInfo *)0x0);
      pSStack_2 = mscorlib.dll::System::String::String_Concat_3(pSStack_2,pSVar7,(MethodInfo *)0x0);
      index = index + 1;
      pLVar3 = (pPVar1->fields).planetOwnerships;
      if (pLVar3 == (List_1_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_ *)0x0) break;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pSVar7 = (String *)(*pcVar8)();
  return pSVar7;
}


/* PlanetOwnershipsData() */

void MVWorldObject.dll::MV::WorldObject::OwnershipData::PlanetOwnershipsData::
     PlanetOwnershipsData__ctor(PlanetOwnershipsData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__List__
            );
  method_00 = (MethodInfo *)&this->fields;
  (this->fields).planetOwnerships = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

