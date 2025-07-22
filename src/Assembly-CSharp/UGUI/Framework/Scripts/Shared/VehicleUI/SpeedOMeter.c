
/* Void Awake() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::SpeedOMeter::
     SpeedOMeter_Awake(SpeedOMeter *this,MethodInfo *method)

{
  this_00 = (this->fields).speedGroup;
  value = _UNK_?;
  if ((this->fields).alwaysShow == 0) {
    value = 0.0;
  }
  if (this_00 == (CanvasGroup *)0x0) {
    uVar1 = func_?(&stack0xfffffff0);
    func_?(uVar1);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
            (this_00,value,(MethodInfo *)0x0);
  return;
}


/* Void Fade() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::SpeedOMeter::SpeedOMeter_Fade
               (SpeedOMeter *this,MethodInfo *method)

{
  if ((this->fields).isVisible != 0) {
    return;
  }
  pCVar1 = (this->fields).speedGroup;
  if (pCVar1 != (CanvasGroup *)0x0) {
    fVar2 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                      (pCVar1,(MethodInfo *)0x0);
    if (fVar2 <= 0.0) {
      return;
    }
    fVar2 = (this->fields).currFade;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar3 = fVar3 + fVar2;
    (this->fields).currFade = fVar3;
    if (fVar3 <= (this->fields).fadeTime) {
      pCVar1 = (this->fields).speedGroup;
      if (fVar3 < 0.0) {
        fVar3 = 0.0;
      }
      else if (_UNK_? < fVar3) {
        fVar3 = _UNK_?;
      }
      if (pCVar1 == (CanvasGroup *)0x0) goto code_?;
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar1,fVar3 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
    }
    pCVar1 = (this->fields).speedGroup;
    if (pCVar1 != (CanvasGroup *)0x0) {
      fVar2 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                        (pCVar1,(MethodInfo *)0x0);
      if (0.0 < fVar2) {
        return;
      }
      pAVar4 = (this->fields).OnShowHide;
      if (pAVar4 != (Action_2_Boolean_Single_ *)0x0) {
        pCVar1 = (this->fields).speedGroup;
        if (pCVar1 == (CanvasGroup *)0x0) goto code_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                  (pCVar1,(MethodInfo *)0x0);
        (*(pAVar4->fields)._._.invoke_impl)();
      }
      this_00 = (this->fields)._.rectTransform;
      if ((this_00 != (RectTransform *)0x0) &&
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0), this_01 != (GameObject *)0x0
         )) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize(Boolean, MVRigidBody) */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::SpeedOMeter::
     SpeedOMeter_Initialize
               (SpeedOMeter *this,bool insideVehicle,MVRigidBody *mvRigidBody,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  (this->fields).rigidBody = mvRigidBody;
  func_?(&(this->fields).rigidBody,mvRigidBody);
  x = (this->fields).rigidBody;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  (this->fields).updateSpeed = bVar1;
  bVar1 = 1;
  if (insideVehicle == 0) {
    bVar1 = (this->fields).alwaysShow;
  }
  (this->fields).isVisible = bVar1 != 0;
  this_00 = (this->fields)._.rectTransform;
  if ((this_00 != (RectTransform *)0x0) &&
     (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), this_02 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_02,(this->fields).isVisible,(MethodInfo *)0x0);
    this_01 = (this->fields).speedGroup;
    value = _UNK_?;
    if ((this->fields).isVisible == 0) {
      value = 0.0;
    }
    if (this_01 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Show() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::SpeedOMeter::SpeedOMeter_Show
               (SpeedOMeter *this,MethodInfo *method)

{
  if ((this->fields).isVisible == 0) {
    pCVar1 = (this->fields).speedGroup;
    if (pCVar1 == (CanvasGroup *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar3 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                      (pCVar1,(MethodInfo *)0x0);
    if (fVar3 < _UNK_?) {
      if ((this->fields).currFade == _UNK_?) {
        this_00 = (this->fields)._.rectTransform;
        if ((this_00 == (RectTransform *)0x0) ||
           (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this_00,(MethodInfo *)0x0),
           this_01 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,1,(MethodInfo *)0x0);
      }
      fVar3 = (this->fields).currFade;
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      fVar4 = fVar4 + fVar3;
      (this->fields).currFade = fVar4;
      if (fVar4 <= (this->fields).fadeTime) {
        pCVar1 = (this->fields).speedGroup;
        if (fVar4 < 0.0) {
          fVar4 = 0.0;
        }
        else if (_UNK_? < fVar4) {
          fVar4 = _UNK_?;
        }
        if (pCVar1 == (CanvasGroup *)0x0) goto code_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar1,fVar4 + 0.0,(MethodInfo *)0x0);
      }
      pCVar1 = (this->fields).speedGroup;
      if (pCVar1 == (CanvasGroup *)0x0) goto code_?;
      fVar3 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                        (pCVar1,(MethodInfo *)0x0);
      if ((_UNK_? <= fVar3) &&
         (pAVar5 = (this->fields).OnShowHide, pAVar5 != (Action_2_Boolean_Single_ *)0x0)) {
        pCVar1 = (this->fields).speedGroup;
        if (pCVar1 == (CanvasGroup *)0x0) goto code_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                  (pCVar1,(MethodInfo *)0x0);
        (*(pAVar5->fields)._._.invoke_impl)((pAVar5->fields)._._.method_code);
      }
    }
  }
  return;
}


/* Void UpdateSpeed() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::SpeedOMeter::
     SpeedOMeter_UpdateSpeed(SpeedOMeter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if ((this->fields).updateSpeed != 0) {
    pMVar1 = (this->fields).rigidBody;
    if (pMVar1 == (MVRigidBody *)0x0) goto code_?;
    puVar2 = (undefined8 *)
             (*(code *)(pMVar1->klass->vtable).__unknown_1.method)
                       (&fStack_3,pMVar1,(pMVar1->klass->vtable).__unknown_2.methodPtr);
    uVar4 = *puVar2;
    IStack_5.m_value = *(int32_t *)(puVar2 + 1);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    fVar6 = (this->fields).curSpeed;
    fVar7 = (float)((ulonglong)uVar4 >> 0x20);
    if (fVar7 * fVar7 + (float)uVar4 * (float)uVar4 +
        (float)IStack_5.m_value * (float)IStack_5.m_value < 0.0) {
      func_?();
    }
    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar7 = _UNK_?;
    if (fVar8 < 0.0) {
      fVar8 = 0.0;
    }
    else if (_UNK_? < fVar8) {
      fVar8 = _UNK_?;
    }
    bVar9 = (this->fields).prevFading;
    in_stack_10 = (fVar6 - in_stack_10) * fVar8 + in_stack_10;
    (this->fields).curSpeed = in_stack_10;
    if (fVar7 < in_stack_10) {
      (this->fields).fading = 0;
      if (bVar9 != 0) {
        (this->fields).currFade = 0.0;
        (this->fields).prevFading = 0;
      }
      if ((this->fields).isVisible == 0) {
        pCVar11 = (this->fields).speedGroup;
        if (pCVar11 == (CanvasGroup *)0x0) goto code_?;
        fVar6 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                           (pCVar11,(MethodInfo *)0x0);
        if (fVar6 < _UNK_?) {
          if ((this->fields).currFade == 0.0) {
            pRVar12 = (this->fields)._.rectTransform;
            if ((pRVar12 == (RectTransform *)0x0) ||
               (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pRVar12,(MethodInfo *)0x0),
               pGVar13 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar13,1,(MethodInfo *)0x0);
          }
          fStack_3 = (this->fields).currFade;
          fStack_14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                ((MethodInfo *)0x0);
          fStack_14 = fStack_14 + fStack_15;
          (this->fields).currFade = fStack_14;
          if (fStack_14 <= (this->fields).fadeTime) {
            pCVar11 = (this->fields).speedGroup;
            if (fStack_14 < 0.0) {
              fVar6 = 0.0;
            }
            else {
              fVar6 = fStack_14;
              if (_UNK_? < fStack_14) {
                fVar6 = _UNK_?;
              }
            }
            if (pCVar11 == (CanvasGroup *)0x0) goto code_?;
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (pCVar11,fVar6 + 0.0,(MethodInfo *)0x0);
          }
          pCVar11 = (this->fields).speedGroup;
          if (pCVar11 == (CanvasGroup *)0x0) goto code_?;
          fStack_16 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                                (pCVar11,(MethodInfo *)0x0);
          if ((_UNK_? <= fStack_16) &&
             (pAVar17 = (this->fields).OnShowHide, pAVar17 != (Action_2_Boolean_Single_ *)0x0)) {
            pCVar11 = (this->fields).speedGroup;
            if (pCVar11 == (CanvasGroup *)0x0) goto code_?;
            fStack_14 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                                  (pCVar11,(MethodInfo *)0x0);
            (*(pAVar17->fields)._._.invoke_impl)
                      ((pAVar17->fields)._._.method_code,1,fStack_14,(pAVar17->fields)._._.method);
          }
        }
      }
    }
    else {
      (this->fields).fading = 1;
      if (bVar9 != 1) {
        (this->fields).currFade = 0.0;
        (this->fields).prevFading = 1;
      }
      if ((this->fields).isVisible == 0) {
        pCVar11 = (this->fields).speedGroup;
        if (pCVar11 == (CanvasGroup *)0x0) goto code_?;
        fVar6 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                           (pCVar11,(MethodInfo *)0x0);
        if (0.0 < fVar6) {
          fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
          fVar6 = fVar6 + (float)IStack_5.m_value;
          (this->fields).currFade = fVar6;
          if (fVar6 <= (this->fields).fadeTime) {
            pCVar11 = (this->fields).speedGroup;
            if (fVar6 < 0.0) {
              fVar6 = 0.0;
            }
            else if (_UNK_? < fVar6) {
              fVar6 = _UNK_?;
            }
            if (pCVar11 == (CanvasGroup *)0x0) goto code_?;
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (pCVar11,fVar6 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
          }
          pCVar11 = (this->fields).speedGroup;
          if (pCVar11 == (CanvasGroup *)0x0) goto code_?;
          fStack_16 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                                (pCVar11,(MethodInfo *)0x0);
          if (fStack_16 <= 0.0) {
            pAVar17 = (this->fields).OnShowHide;
            if (pAVar17 != (Action_2_Boolean_Single_ *)0x0) {
              pCVar11 = (this->fields).speedGroup;
              if (pCVar11 == (CanvasGroup *)0x0) goto code_?;
              fStack_14 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                                    (pCVar11,(MethodInfo *)0x0);
              (*(pAVar17->fields)._._.invoke_impl)
                        ((pAVar17->fields)._._.method_code,0,fStack_14,(pAVar17->fields)._._.method);
            }
            pRVar12 = (this->fields)._.rectTransform;
            if ((pRVar12 == (RectTransform *)0x0) ||
               (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pRVar12,(MethodInfo *)0x0),
               pGVar13 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar13,0,(MethodInfo *)0x0);
          }
        }
      }
    }
    pTVar18 = (this->fields).speedText;
    IStack_5.m_value = (int32_t)(this->fields).curSpeed;
    pSVar19 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_5,(MethodInfo *)0x0);
    pSVar20 = ::StringLiteral__;
    if (pSVar19 != (String *)0x0) {
      pSVar20 = pSVar19;
    }
    if (pTVar18 == (Text *)0x0) {
code_?:
      func_?();
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
    (*(code *)(pTVar18->klass->vtable).set_text.method)
              (pTVar18,pSVar20,(pTVar18->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
  }
  return;
}


/* SpeedOMeter() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::SpeedOMeter::
     SpeedOMeter__ctor(SpeedOMeter *this,MethodInfo *method)

{
  (this->fields).fadeTime = 2.0;
  (this->fields).prevFading = 1;
  (this->fields).fading = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Boolean get_IsVisible() */

bool Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::SpeedOMeter::
     SpeedOMeter_get_IsVisible(SpeedOMeter *this,MethodInfo *method)

{
  this_00 = (this->fields).speedGroup;
  if (this_00 != (CanvasGroup *)0x0) {
    fVar1 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                      (this_00,(MethodInfo *)0x0);
    return _UNK_? < fVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}

