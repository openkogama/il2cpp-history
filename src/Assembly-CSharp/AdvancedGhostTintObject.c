
/* Void TeamTint(MVTeam) */

void Assembly-CSharp.dll::AdvancedGhostTintObject::AdvancedGhostTintObject_TeamTint
               (AdvancedGhostTintObject *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  MVar1 = MVTeam__Enum_Server;
  if (team != MVTeam__Enum_None) {
    MVar1 = team;
  }
  index = 0;
  pLVar2 = (this->fields).teamIrisObjects;
  if (pLVar2 != (List_1_OculusTeamGameObject_ *)0x0) {
    while( true ) {
      if ((pLVar2->fields)._size <= index) {
        return;
      }
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).teamIrisObjects;
      if (((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
          (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar3,index,
                              MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                             ), RVar4 == (RegexCharClass_SingleRange)0x0)) ||
         (*(GameObject **)((int)RVar4 + 0xc) == (GameObject *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*(GameObject **)((int)RVar4 + 0xc),0,(MethodInfo *)0x0);
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).teamIrisObjects;
      if ((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar3,index,
                             MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                            ), RVar4 == (RegexCharClass_SingleRange)0x0)) break;
      if (*(MVTeam__Enum *)((int)RVar4 + 8) == MVar1) {
        pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).teamIrisObjects;
        if (((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
            (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar3,index,
                                MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                               ), RVar4 == (RegexCharClass_SingleRange)0x0)) ||
           (*(GameObject **)((int)RVar4 + 0xc) == (GameObject *)0x0)) break;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (*(GameObject **)((int)RVar4 + 0xc),1,(MethodInfo *)0x0);
      }
      pLVar2 = (this->fields).teamIrisObjects;
      index = index + 1;
      if (pLVar2 == (List_1_OculusTeamGameObject_ *)0x0) break;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Tint(Color) */

void Assembly-CSharp.dll::AdvancedGhostTintObject::AdvancedGhostTintObject_Tint
               (AdvancedGhostTintObject *this,Color c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Attempting_to_tint_oculus_object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)StringLiteral_Attempting_to_tint_oculus_object,(MethodInfo *)0x0);
  return;
}

