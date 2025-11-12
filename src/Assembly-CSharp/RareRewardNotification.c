
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::RareRewardNotification::RareRewardNotification_Initialize
               (RareRewardNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__RewardRarity);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__RewardType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__won__1__2__from_spins_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._.timeSinceStart = 0.0;
  auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,0xb);
  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_8);
  if ((data == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar1 == (Object *)0x0)) goto code_?;
  if ((pOVar1->klass->_0).element_class != (TypeInfo__MV__Common__RewardRarity->_0).element_class) {
    FUN_?(pOVar1,TypeInfo__MV__Common__RewardRarity);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  cVar3 = *(char *)&pOVar1[1].klass;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar4 == (MVGameControllerBase *)0x0) ||
     (pMVar5 = (pMVar4->fields).game, pMVar5 == (MVNetworkGame *)0x0)) goto code_?;
  pMVar6 = (pMVar5->fields).playerContainer;
  auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,9);
  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_8);
  pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     (data,pOVar1,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  if ((pMVar6 == (MVPlayerContainer *)0x0) || (pOVar1 == (Object *)0x0)) goto code_?;
  if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar1,lRam_?);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  key = *(int32_t *)&pOVar1[1].klass;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (pMVar6->fields).players;
  if (this_00 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
  pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
           Dictionary_2_System_Int32_System_Object__get_Item
                     ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Item_int_
                     );
  auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,5);
  pOVar7 = (Object *)FUN_?(uRam_?,auStackX_8);
  pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      (data,pOVar7,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (pOVar7 == (Object *)0x0) goto code_?;
  if ((pOVar7->klass->_0).element_class != (TypeInfo__MV__Common__RewardType->_0).element_class) {
    FUN_?(pOVar7,TypeInfo__MV__Common__RewardType);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar8 = *(int *)&pOVar7[1].klass;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__xp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ERROR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__test);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__gold);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar9 = StringLiteral__xp;
  if (iVar8 == 1) {
code_?:
    pSVar9 = TM::TM__(pSVar9,(MethodInfo *)0x0);
  }
  else {
    pSVar9 = StringLiteral__test;
    if (iVar8 != 2) {
      pSVar9 = StringLiteral__gold;
      if (iVar8 != 3) {
        pSVar9 = StringLiteral_ERROR;
      }
      goto code_?;
    }
  }
  auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,4);
  pOVar7 = (Object *)FUN_?(uRam_?,auStackX_8);
  pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      (data,pOVar7,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (pOVar7 == (Object *)0x0) goto code_?;
  if ((pOVar7->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar7,lRam_?);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar10 = *(undefined4 *)&pOVar7[1].klass;
  pTVar11 = (this->fields).text;
  format = TM::TM__(StringLiteral__0__won__1__2__from_spins_,(MethodInfo *)0x0);
  if ((pOVar1 == (Object *)0x0) || (pOVar1[7].klass == (Object__Class *)0x0))
  goto code_?;
  pOVar1 = (Object *)((pOVar1[7].klass)->_0).namespaze;
  auStackX_8[0] = uVar10;
  pOVar7 = (Object *)FUN_?(lRam_?,auStackX_8);
  PStack_12._arg0 = (Object *)0x0;
  PStack_12._arg1 = (Object *)0x0;
  PStack_12._arg2 = (Object *)0x0;
  PStack_12._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_2
            (&PStack_12,pOVar1,pOVar7,(Object *)pSVar9,(MethodInfo *)0x0);
  PStack_13._arg0 = PStack_12._arg0;
  PStack_13._arg1 = PStack_12._arg1;
  PStack_13._arg2 = PStack_12._arg2;
  PStack_13._args = PStack_12._args;
  pSVar9 = mscorlib.dll::System::String::String_FormatHelper
                      ((IFormatProvider *)0x0,format,&PStack_13,(MethodInfo *)0x0);
  if (pTVar11 == (Text *)0x0) goto code_?;
  (*(pTVar11->klass->vtable).set_text.methodPtr)(pTVar11,pSVar9);
  if (cVar3 == '\x03') {
    pGVar14 = (this->fields).EpicPanel;
    if (pGVar14 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar14,1,(MethodInfo *)0x0);
    pGVar14 = (this->fields).LegendaryPanel;
code_?:
    if (pGVar14 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar14,0,(MethodInfo *)0x0);
  }
  else if (cVar3 == '\x04') {
    pGVar14 = (this->fields).LegendaryPanel;
    if (pGVar14 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar14,1,(MethodInfo *)0x0);
    pGVar14 = (this->fields).EpicPanel;
    goto code_?;
  }
  this_01 = (this->fields).tertiaryNotificationUI;
  l = (*(this->klass->vtable).get_Lifetime.methodPtr)
                (this,(this->klass->vtable).get_Lifetime.method);
  if (this_01 != (TertiaryNotificationUI *)0x0) {
    TertiaryNotificationUI::TertiaryNotificationUI_Initialize
              (this_01,(Notification *)this,l,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* String TypeToText(RewardType) */

String * Assembly-CSharp.dll::RareRewardNotification::RareRewardNotification_TypeToText
                   (RareRewardNotification *this,RewardType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__xp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ERROR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__test);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__gold);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral__xp;
  if (type != RewardType__Enum_XPReward) {
    if (type == RewardType__Enum_TestReward) {
      return StringLiteral__test;
    }
    pSVar1 = StringLiteral__gold;
    if (type != RewardType__Enum_GoldReward) {
      pSVar1 = StringLiteral_ERROR;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___sPtr___sPtr_____________Ptr_________);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar1 == (String *)0x0) {
    return (String *)0x0;
  }
  this_01 = (Regex *)FUN_?(TypeInfo__System__Text__RegularExpressions__Regex);
  System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_1
            (this_01,StringLiteral___sPtr___sPtr_____________Ptr_________,(MethodInfo *)0x0);
  if (this_01 != (Regex *)0x0) {
    if (((this_01->fields).roptions & 0x40) == 0) {
      startat = 0;
    }
    else {
      startat = (pSVar1->fields)._stringLength;
    }
    pMVar2 = System.dll::System::Text::RegularExpressions::Regex::Regex_Run
                       (this_01,0,-1,pSVar1,0,(pSVar1->fields)._stringLength,startat,
                        (MethodInfo *)0x0);
    if (pMVar2 != (Match *)0x0) {
      if ((pMVar2->fields)._._capcount != 0) {
        this_02 = (GroupCollection *)
                  (*(pMVar2->klass->vtable).get_Groups.methodPtr)
                            (pMVar2,(pMVar2->klass->vtable).get_Groups.method);
        if (((this_02 == (GroupCollection *)0x0) ||
            (pGVar3 = System.dll::System::Text::RegularExpressions::GroupCollection::
                      GroupCollection_GetGroup(this_02,1,(MethodInfo *)0x0), pGVar3 == (Group *)0x0)
            ) || (pSVar1 = (String *)
                           (*(pGVar3->klass->vtable).ToString.methodPtr)
                                     (pGVar3,(pGVar3->klass->vtable).ToString.method),
                 pSVar1 == (String *)0x0)) goto code_?;
        pSVar1 = mscorlib.dll::System::String::String_Substring_1
                           (pSVar1,1,(pSVar1->fields)._stringLength + -2,(MethodInfo *)0x0);
        pSVar1 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                           (pSVar1,(MethodInfo *)0x0);
      }
      if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
        pTVar4 = TM::TM_get_Instance((MethodInfo *)0x0);
        if (pTVar4 == (TM *)0x0) goto code_?;
        if ((pTVar4->fields).catalog != (Catalog *)0x0) {
          pTVar4 = TM::TM_get_Instance((MethodInfo *)0x0);
          if ((pTVar4 == (TM *)0x0) ||
             (this_00 = (pTVar4->fields).catalog, this_00 == (Catalog *)0x0))
          goto code_?;
          this_03 = GNU::Gettext::Catalog::Catalog_FindItem
                              (this_00,pSVar1,::StringLiteral__,(MethodInfo *)0x0);
          if ((this_03 != (CatalogEntry *)0x0) &&
             ((text = GNU::Gettext::CatalogEntry::CatalogEntry_GetTranslation
                                (this_03,0,(MethodInfo *)0x0), text != (String *)0x0 &&
              ((text->fields)._stringLength != 0)))) {
            pSVar1 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                               (text,(MethodInfo *)0x0);
            return pSVar1;
          }
        }
      }
      return pSVar1;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar5)();
  return pSVar1;
}

