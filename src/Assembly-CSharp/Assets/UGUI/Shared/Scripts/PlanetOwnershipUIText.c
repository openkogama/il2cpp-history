
/* Void Awake() */

void Assembly-CSharp.dll::Assets::UGUI::Shared::Scripts::PlanetOwnershipUIText::
     PlanetOwnershipUIText_Awake(PlanetOwnershipUIText *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__RectTransform);
    func_?(&StringLiteral_Editor);
    func_?(&StringLiteral_Play_Tester);
    func_?(&StringLiteral_Owner);
    func_?(&StringLiteral_Spectator);
    func_?(&StringLiteral_error);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  value = unaff_ESI;
  if ((this_00 != (MVNetworkGame *)0x0) &&
     (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     this_01 != (MVLocalPlayer *)0x0)) {
    PVar1 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_01,(MethodInfo *)0x0);
    pMVar2 = unaff_ESI[1].monitor;
    switch(PVar1 & 0xff) {
    case PlanetOwnershipType__Enum_Editor:
      pSVar3 = StringLiteral_Editor;
      break;
    case PlanetOwnershipType__Enum_Owner:
      pSVar3 = StringLiteral_Owner;
      break;
    case PlanetOwnershipType__Enum_Playtester:
      pSVar3 = StringLiteral_Play_Tester;
      break;
    default:
      pSVar3 = StringLiteral_error;
      break;
    case PlanetOwnershipType__Enum_Spectator:
      pSVar3 = StringLiteral_Spectator;
    }
    TM::TM__(pSVar3,(MethodInfo *)0x0);
    value = (Transform *)0x0;
    unaff_EDI = unaff_ESI;
    if (pMVar2 != (MonitorData *)0x0) {
      (**(code **)(*(int *)pMVar2 + 0x318))();
      value = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)unaff_ESI,(MethodInfo *)0x0);
      if (((unaff_ESI[1].monitor != (MonitorData *)0x0) &&
          (iVar4 = (**(code **)(*(int *)unaff_ESI[1].monitor + 0x310))(), iVar4 != 0)) &&
         (value != (Transform *)0x0)) {
        pTVar5 = (Transform *)0x0;
        if (value->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
          pTVar5 = value;
        }
        cVar6 = '\0';
        value_00 = TypeInfo__UnityEngine__RectTransform;
        if (pTVar5 != (Transform *)0x0) {
          pTVar5 = (Transform *)0x0;
          if (value->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
            pTVar5 = value;
          }
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
          RectTransform_SetSizeWithCurrentAnchors
                    ((RectTransform *)pTVar5,RectTransform_Axis__Enum_Horizontal,
                     (float)*(int *)(iVar4 + 8) * _UNK_?,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
  }
  cVar6 = '\0';
  func_?();
  value_00 = extraout_ECX;
code_?:
  uVar7 = func_?();
  uVar8 = *(undefined1 *)&unaff_EDI[-0x75e53fa].fields._._.m_CachedPtr;
  pcVar9 = (char *)((int)&value[-0x67ea3f3].fields._._.m_CachedPtr + 3);
  *pcVar9 = *pcVar9 + unaff_BL + cVar6;
  pcVar9 = (char *)(CONCAT22((short)((uint)uVar7 >> 0x10),CONCAT11(uVar8,(char)uVar7)) + 0x551050a7)
  ;
  *pcVar9 = *pcVar9 + (char)((uint)extraout_ECX_00 >> 8) + (value->klass < unaff_EDI->klass);
  in_stack_10.m_value = (float)in_stack_10.m_value;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                    ,extraout_ECX_00);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                   );
    func_?(&TypeInfo__StatHat__Post__FormPoster);
    func_?(&StringLiteral_count);
    func_?(&StringLiteral__c);
    func_?(&StringLiteral_ukey);
    func_?(&StringLiteral_https___api_stathat_com);
    func_?(&StringLiteral_key);
    cRam_? = '\x01';
  }
  this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                               ,&unaff_EDI->monitor,&value->monitor);
  pDVar11 = this_02;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  if (this_02 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)StringLiteral_key,
               (Object *)value,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)StringLiteral_ukey,
               (Object *)value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar3 = mscorlib.dll::System::Single::Single_ToString(&stack0x00000010,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)StringLiteral_count,
               (Object *)pSVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    method_00 = TypeInfo__StatHat__Post__FormPoster;
    this_03 = (Post_FormPoster *)func_?();
    pSVar12 = StringLiteral_https___api_stathat_com;
    pSVar3 = StringLiteral__c;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this_03,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (this_03->fields).BaseUrl = pSVar12;
    ppSStack13 = &(this_03->fields).BaseUrl;
    pSStack14 = pSVar12;
    pDStack15 =
         (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         &UNK_?;
    func_?();
    pDStack15 = pDVar11;
    (this_03->fields).Parameters = (Dictionary_2_System_String_System_String_ *)pDStack15;
    pPStack16 = &this_03->fields;
    func_?();
    ppSStack17 = &(this_03->fields).RelUrl;
    (this_03->fields).RelUrl = pSVar3;
    pSStack18 = pSVar3;
    func_?();
    StatHat::Post+FormPoster::Post_FormPoster_PostForm(this_03,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}

