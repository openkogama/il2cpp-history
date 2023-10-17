
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::HighScoreDatas::HighScoreDatas_ToString
                   (HighScoreDatas *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                   );
    func_?(&StringLiteral__0____1__u000A);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pHVar1 = this;
  index = 0;
  pLVar2 = (this->fields).highScores;
  pSVar3 = ::StringLiteral__;
  while (pLVar2 != (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0) {
    if ((pLVar2->fields)._size <= index) {
      return pSVar3;
    }
    this = (HighScoreDatas *)((pHVar1->fields).topRank + index);
    arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (pHVar1->fields).highScores;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
    arg1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     (this_00,index,
                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__get_Item_int_
                     );
    str1 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral__0____1__u000A,arg0,(Object *)arg1,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3(pSVar3,str1,(MethodInfo *)0x0);
    index = index + 1;
    pLVar2 = (pHVar1->fields).highScores;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* HighScoreDatas() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::HighScoreDatas::HighScoreDatas__ctor
               (HighScoreDatas *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>
                           );
  if (this_00 != (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__List__
              );
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).highScores = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* HighScoreDatas(Int32, List`1[MV.WorldObject.GamePassSystem.HighScoreEntry]) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::HighScoreDatas::HighScoreDatas__ctor_1
               (HighScoreDatas *this,int32_t topRank,
               List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *highScores,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>
                           );
  if (this_00 != (List_1_MV_WorldObject_GamePassSystem_HighScoreEntry_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::GamePassSystem::HighScoreEntry>__List__
              );
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).highScores = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    (this->fields).topRank = topRank;
    (this->fields).highScores = highScores;
    func_?(&this->fields,highScores);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

