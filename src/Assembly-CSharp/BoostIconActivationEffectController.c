
/* Void Activate() */

void Assembly-CSharp.dll::BoostIconActivationEffectController::
     BoostIconActivationEffectController_Activate
               (BoostIconActivationEffectController *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((pMVar1 != (MVLocalPlayer *)0x0) &&
     (this_00 = (pMVar1->fields).boostController, this_00 != (BoostController *)0x0)) {
    bVar2 = BoostController::BoostController_IsBoostActive
                      (this_00,(this->fields).boostType,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pUVar3 = (this->fields).startNewEffect;
      if (pUVar3 != (UnityAction *)0x0) {
        (*(pUVar3->fields)._._.invoke_impl)((pUVar3->fields)._._.method_code);
        return;
      }
    }
    else {
      this_01 = (this->fields).canvasGroup;
      if (this_01 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (this_01,1.0,(MethodInfo *)0x0);
        (this->fields).currentState = 1;
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).stateStartTime = fVar4;
        (this->fields).haveStartedNewEffect = 0;
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar5 != (Transform *)0x0) {
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                             (&VStack_7,pTVar5,(MethodInfo *)0x0);
          puStack_8 = (undefined *)pVVar6->x;
          fStack_9 = (this->fields).originalYPosition;
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar5 != (Transform *)0x0) {
            VStack_7.x = (float)puStack_8;
            VStack_7.y = fStack_9;
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                               ((Vector3 *)&stack0xffffffdc,pTVar5,(MethodInfo *)0x0);
            fVar4 = pVVar6->z;
            VStack_7.z = fVar4;
            if (this_03 != (Transform *)0x0) {
              value.y = VStack_7.y;
              value.x = VStack_7.x;
              value.z = fVar4;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (this_03,value,(MethodInfo *)0x0);
              if (this_02 != (Transform *)0x0) {
                value_00.y = VStack_7.y;
                value_00.x = VStack_7.x;
                value_00.z = fVar4;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (this_02,value_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Initialize(BoostType, UnityAction) */

void Assembly-CSharp.dll::BoostIconActivationEffectController::
     BoostIconActivationEffectController_Initialize
               (BoostIconActivationEffectController *this,BoostType__Enum type,
               UnityAction *startNewEffect,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController::BoosterIcons>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController::BoosterIcons>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).boosterIcons;
  do {
    if (pLVar1 == (List_1_BoostIconActivationEffectController_BoosterIcons_ *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pLVar1->fields)._size <= index) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
        (this->fields).originalYPosition = pVVar3->y;
        (this->fields).boostType = type;
        (this->fields).startNewEffect = startNewEffect;
        func_?(&(this->fields).startNewEffect,startNewEffect);
        return;
      }
      goto code_?;
    }
    pLVar4 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
             (this->fields).boosterIcons;
    if (pLVar4 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
    goto code_?;
    XVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
            XmlSchemaObjectTable+XmlSchemaObjectEntry]::
            List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                      (pLVar4,index,
                       MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController::BoosterIcons>__get_Item_int_
                      );
    pLVar4 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
             (this->fields).boosterIcons;
    if (pLVar4 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
    goto code_?;
    XVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
            XmlSchemaObjectTable+XmlSchemaObjectEntry]::
            List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                      (pLVar4,index,
                       MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController::BoosterIcons>__get_Item_int_
                      );
    if (XVar6.xso == (XmlSchemaObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              ((GameObject *)XVar6.xso,XVar5.qname == (XmlQualifiedName *)type,(MethodInfo *)0x0);
    pLVar1 = (this->fields).boosterIcons;
    index = index + 1;
  } while( true );
}


/* Void SetState(BoostIconActivationEffectController+EffectState) */

void Assembly-CSharp.dll::BoostIconActivationEffectController::
     BoostIconActivationEffectController_SetState
               (BoostIconActivationEffectController *this,
               BoostIconActivationEffectController_EffectState__Enum newState,MethodInfo *method)

{
  (this->fields).currentState = newState;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).stateStartTime = fVar1;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::BoostIconActivationEffectController::
     BoostIconActivationEffectController_Update
               (BoostIconActivationEffectController *this,MethodInfo *method)

{
  if ((this->fields).currentState == 1) {
    fVar1 = (this->fields).showingDuration + (this->fields).stateStartTime;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fVar1 <= fVar2) {
      (this->fields).currentState = 2;
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      this_01 = (this->fields).fader;
      (this->fields).stateStartTime = fVar1;
      if (this_01 != (NotificationFade *)0x0) {
        NotificationFade::NotificationFade_Activate(this_01,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  else {
    if ((this->fields).currentState == 2) {
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           ((Vector3 *)&fStack_5,pTVar3,(MethodInfo *)0x0);
        fVar1 = pVVar4->x;
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          fStack_5 = fVar1;
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                             ((Vector3 *)&stack0xffffffd4,pTVar3,(MethodInfo *)0x0);
          if (this_02 != (Transform *)0x0) {
            value.y = (float)puStack_6;
            value.x = fStack_5;
            value.z = pVVar4->z;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (this_02,value,(MethodInfo *)0x0);
            fVar1 = (this->fields).startNewEffectDelay + (this->fields).stateStartTime;
            fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0);
            if ((fVar1 <= fVar2) && ((this->fields).haveStartedNewEffect == 0)) {
              pUVar7 = (this->fields).startNewEffect;
              if (pUVar7 == (UnityAction *)0x0) goto code_?;
              puStack8 = (pUVar7->fields)._._.method_code;
              (*(pUVar7->fields)._._.invoke_impl)();
              (this->fields).haveStartedNewEffect = 1;
            }
            if ((float)this_02 < _UNK_?) {
              return;
            }
            (this->fields).currentState = 0;
            fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0);
            (this->fields).stateStartTime = fVar1;
            return;
          }
        }
      }
code_?:
      func_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((this->fields).currentState == 0) {
      this_00 = (this->fields).canvasGroup;
      if (this_00 == (CanvasGroup *)0x0) goto code_?;
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,0.0,(MethodInfo *)0x0);
    }
  }
  return;
}

