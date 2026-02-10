
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PlayerJoinedNotification::PlayerJoinedNotification_Initialize
               (PlayerJoinedNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__joined_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__joined_from_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__returning_English_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Country_dictionary_doesn_t_conta);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_en_US);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  PlayerNotification::PlayerNotification_Initialize
            ((PlayerNotification *)this,data,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pMVar3 = (pMVar2->fields).playerContainer;
    auStackX_10[0] = 9;
    pOVar4 = (Object *)FUN_?(uRam_?,auStackX_10);
    if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       ((pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (data,pOVar4,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), pMVar3 != (MVPlayerContainer *)0x0 && (pOVar4 != (Object *)0x0)))) {
      if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar4,lRam_?);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar6 = *(int32_t *)&pOVar4[1].klass;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (pMVar3->fields).players;
      if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_00,iVar6,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                           );
        auStackX_10[0] = 0xc;
        key = (Object *)FUN_?(uRam_?,auStackX_10);
        pSVar7 = (String *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (data,key,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pSVar8 = (String *)0x0;
        if (pSVar7 != (String *)0x0) {
          if (pSVar7->klass == pSRam0000000182dc2f60) {
            pSVar8 = pSVar7;
          }
          if (pSVar8 == (String *)0x0) {
            FUN_?(pSVar7);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar9 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar9 != (GameSessionData *)0x0) {
          pSVar7 = (pGVar9->fields).language;
          if ((pSVar8 == pSVar7) ||
             ((((pSVar8 != (String *)0x0 && (pSVar7 != (String *)0x0)) &&
               ((pSVar8->fields)._stringLength == (pSVar7->fields)._stringLength)) &&
              (bVar10 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(pSVar8->fields)._firstChar,
                                  (uint8_t *)&(pSVar7->fields)._firstChar,
                                  (longlong)(pSVar8->fields)._stringLength * 2,(MethodInfo *)0x0),
              bVar10 != 0)))) {
            this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)(this->fields).Country;
            (this->fields)._.lifeTime = 8;
            if (this_01 ==
                (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) goto code_?;
            iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                              (this_01,(Object *)pSVar8,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                               ->klass->rgctx_data[0x21].method);
            if (iVar6 < 0) {
              pSVar8 = mscorlib.dll::System::String::String_Concat_5
                                  (StringLiteral_Country_dictionary_doesn_t_conta,pSVar8,
                                   StringLiteral__returning_English_,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                        ((Object *)pSVar8,(MethodInfo *)0x0);
              this_02 = (this->fields).Country;
              pSVar8 = StringLiteral_en_US;
            }
            else {
              this_02 = (this->fields).Country;
            }
            if (this_02 == (Dictionary_2_System_String_System_String_ *)0x0)
            goto code_?;
            pSVar8 = (String *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                ((Dictionary_2_System_Object_System_Object_ *)this_02,
                                 (Object *)pSVar8,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                                );
            pTVar11 = (this->fields)._.NameLabel;
            if ((pOVar4 == (Object *)0x0) || (pOVar4[7].klass == (Object__Class *)0x0))
            goto code_?;
            pSVar7 = (String *)((pOVar4[7].klass)->_0).namespaze;
            str1 = TM::TM__(StringLiteral__joined_from_,(MethodInfo *)0x0);
            pSVar8 = mscorlib.dll::System::String::String_Concat_5
                                (pSVar7,str1,pSVar8,(MethodInfo *)0x0);
          }
          else {
            pTVar11 = (this->fields)._.NameLabel;
            if ((pOVar4 == (Object *)0x0) || (pOVar4[7].klass == (Object__Class *)0x0))
            goto code_?;
            pSVar8 = (String *)((pOVar4[7].klass)->_0).namespaze;
            pSVar7 = TM::TM__(StringLiteral__joined_,(MethodInfo *)0x0);
            pSVar8 = mscorlib.dll::System::String::String_Concat_4
                                (pSVar8,pSVar7,(MethodInfo *)0x0);
          }
          if (pTVar11 != (Text *)0x0) {
            (*(pTVar11->klass->vtable).set_text.methodPtr)
                      (pTVar11,pSVar8,(pTVar11->klass->vtable).set_text.method);
            this_03 = (this->fields)._.tertiaryNotificationUI;
            l = (*(this->klass->vtable).get_Lifetime.methodPtr)
                          (this,(this->klass->vtable).get_Lifetime.method);
            if (this_03 != (TertiaryNotificationUI *)0x0) {
              TertiaryNotificationUI::TertiaryNotificationUI_Initialize
                        (this_03,(Notification *)this,l,1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* PlayerJoinedNotification() */

void Assembly-CSharp.dll::PlayerJoinedNotification::PlayerJoinedNotification__ctor
               (PlayerJoinedNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Italy);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_es_ES);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Brazil);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Russia);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_pt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Norway);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Turkey);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Indonesia);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_France);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_The_United_Kingdom);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Germany);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_da_DK);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_pt_BR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_The_United_States);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_it_IT);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Denmark);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Finland);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_nl_NL);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_sv_SE);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_fi);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_de_DE);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_fr_FR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_The_Netherlands);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_pl_PL);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_en_GB);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_id_ID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Sweden);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Spain);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ru_RU);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_tr_TR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_nb_NO);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Portugal);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_en_US);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Poland);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  pSVar1 = TM::TM__(StringLiteral_Denmark,(MethodInfo *)0x0);
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_da_DK,
             (Object *)pSVar1,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Germany,(MethodInfo *)0x0);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_de_DE,
             (Object *)pSVar1,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_The_United_States,(MethodInfo *)0x0);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_en_US,
             (Object *)pSVar1,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_The_United_Kingdom,(MethodInfo *)0x0);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_en_GB,
             (Object *)pSVar1,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Spain,(MethodInfo *)0x0);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_es_ES,
             (Object *)pSVar1,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Finland,(MethodInfo *)0x0);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_fi,
             (Object *)pSVar1,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_France,(MethodInfo *)0x0);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_fr_FR,
             (Object *)pSVar1,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Indonesia,(MethodInfo *)0x0);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_id_ID,
             (Object *)pSVar1,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Italy,(MethodInfo *)0x0);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_it_IT,
             (Object *)pSVar1,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Norway,(MethodInfo *)0x0);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_nb_NO,
             (Object *)pSVar1,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_The_Netherlands,(MethodInfo *)0x0);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_nl_NL,
             (Object *)pSVar1,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Poland,(MethodInfo *)0x0);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_pl_PL,
             (Object *)pSVar1,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Brazil,(MethodInfo *)0x0);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_pt_BR,
             (Object *)pSVar1,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Russia,(MethodInfo *)0x0);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_ru_RU,
             (Object *)pSVar1,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Sweden,(MethodInfo *)0x0);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_sv_SE,
             (Object *)pSVar1,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Turkey,(MethodInfo *)0x0);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_tr_TR,
             (Object *)pSVar1,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_Portugal,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_pt,
             (Object *)pSVar1,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
             ->klass->rgctx_data[0x22].method);
  bVar4 = iRam_? != 0;
  (this->fields).Country = (Dictionary_2_System_String_System_String_ *)this_00;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).Country >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  bVar4 = cRam_? == '\0';
  (this->fields)._.lifeTime = 2;
  if (bVar4) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

