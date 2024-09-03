
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::GameRankRequirementSettings::GameRankRequirementSettings_Initialize
               (GameRankRequirementSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_Game_Tier_Requirement);
    func_?(&StringLiteral_RequiredRank);
    cRam_? = '\x01';
  }
  pGVar1 = this;
  this_00 = (this->fields).settingsBase;
  header = TM::TM__(StringLiteral_Game_Tier_Requirement,(MethodInfo *)0x0);
  iVar2 = woID;
  if (this_00 == (SettingsBase *)0x0) goto code_?;
  SettingsBase::SettingsBase_Initialize_1(this_00,woID,root,header,(MethodInfo *)0x0);
  if (iVar2 == -1) {
    woID = (int32_t)
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    this = (GameRankRequirementSettings *)&UNK_?;
    this_04 = (MethodInfo *)func_?();
    this = (GameRankRequirementSettings *)
           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)this_04,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this = (GameRankRequirementSettings *)&this;
    pOVar3 = (Object *)func_?();
    if (this_04 == (MethodInfo *)0x0) goto code_?;
    method = (MethodInfo *)StringLiteral_RequiredRank;
    woID = (int32_t)&UNK_?;
    root = (GameObject *)this_04;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_04,
               (Object *)StringLiteral_RequiredRank,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
  }
  else {
    woID = 0;
    this = (GameRankRequirementSettings *)&UNK_?;
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_03 == (MVWorldObjectClientManager *)0x0) goto code_?;
    root = (GameObject *)0x0;
    this = (GameRankRequirementSettings *)this_03;
    woID = iVar2;
    pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_03,iVar2,(MethodInfo *)0x0);
    if ((pMVar4 == (MVWorldObject *)0x0) ||
       (this_04 = (MethodInfo *)(pMVar4->fields).data, this_04 == (MethodInfo *)0x0))
    goto code_?;
  }
  root = (GameObject *)&UNK_?;
  method = this_04;
  bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_04,
                     (Object *)StringLiteral_RequiredRank,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar5 == 0) {
    root = (GameObject *)0x0;
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_04,
               (Object *)StringLiteral_RequiredRank,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
  }
  root = (GameObject *)
         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
  ;
  woID = (int32_t)StringLiteral_RequiredRank;
  this = (GameRankRequirementSettings *)this_04;
  TVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_04,
                     (Object *)StringLiteral_RequiredRank,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
  if (TVar6.m_Index != 0) {
    if (*(Il2CppClass **)(*(int *)TVar6.m_Index + 0x20) ==
        (TypeInfo__System__Int32->_0).element_class) {
      piVar7 = (int32_t *)func_?();
      this_01 = (pGVar1->fields).slider;
      if (this_01 != (SettingsSlider *)0x0) {
        iVar2 = *piVar7;
        SettingsSlider::SettingsSlider_Initialize_1
                  (this_01,StringLiteral_RequiredRank,iVar2,0,3,(MethodInfo *)0x0);
        this_02 = (pGVar1->fields).gameTierRequirementInputField;
        if (this_02 != (SettingsInputFieldSlider *)0x0) {
          method = (MethodInfo *)StringLiteral_RequiredRank;
          woID = (int32_t)&UNK_?;
          root = (GameObject *)this_02;
          SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                    (this_02,StringLiteral_RequiredRank,iVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      method = (MethodInfo *)&UNK_?;
      func_?();
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::GameRankRequirementSettings::GameRankRequirementSettings_OnSettingChanged
               (GameRankRequirementSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  if (value != (Object *)0x0) {
    pSVar1 = TypeInfo__System__Single;
    if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar2 = (float *)func_?(value);
    fVar3 = *pfVar2;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    uStack_4 = (double)fVar3;
    fVar5 = (float10)func_?(uStack_4);
    this_00 = (this->fields).gameTierRequirementInputField;
    uStack_4 = (double)CONCAT44((int)fVar5,SUB84((double)fVar5,0));
    text = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)((int)&uStack_4 + 4),(MethodInfo *)0x0);
    if (this_00 != (SettingsInputFieldSlider *)0x0) {
      SettingsInputFieldSlider::SettingsInputFieldSlider_SetText(this_00,text,(MethodInfo *)0x0);
      this_01 = (this->fields).settingsBase;
      iStack_6 = uStack_4._4_4_;
      value_00 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
      if (this_01 != (SettingsBase *)0x0) {
        SettingsBase::SettingsBase_OnSettingChanged(this_01,key,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  value = extraout_ECX;
  pSVar1 = extraout_EDX;
code_?:
  func_?(value,pSVar1);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

