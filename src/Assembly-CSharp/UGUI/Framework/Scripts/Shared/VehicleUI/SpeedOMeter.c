
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
  if ((this->fields).noHiding == 0) {
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
    if (0.0 < fVar3) {
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
                  (pCVar1,fVar4 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
      }
      pCVar1 = (this->fields).speedGroup;
      if (pCVar1 == (CanvasGroup *)0x0) goto code_?;
      fVar3 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                        (pCVar1,(MethodInfo *)0x0);
      if ((fVar3 <= 0.0) &&
         (pAVar5 = (this->fields).OnShowHide, pAVar5 != (Action_2_Boolean_Single_ *)0x0)) {
        pCVar1 = (this->fields).speedGroup;
        if (pCVar1 == (CanvasGroup *)0x0) goto code_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                  (pCVar1,(MethodInfo *)0x0);
        pvStack6 = (pAVar5->fields)._._.method;
        (*(pAVar5->fields)._._.invoke_impl)();
      }
    }
  }
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
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,(this->fields).updateSpeed,(MethodInfo *)0x0);
    bVar1 = 1;
    if (insideVehicle == 0) {
      bVar1 = (this->fields).alwaysShow;
    }
    (this->fields).noHiding = bVar1 != 0;
    this_00 = (this->fields).speedGroup;
    value = _UNK_?;
    if ((this->fields).noHiding == 0) {
      value = 0.0;
    }
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,value,(MethodInfo *)0x0);
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
  if ((this->fields).noHiding == 0) {
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
        pvStack6 = (pAVar5->fields)._._.method;
        (*(pAVar5->fields)._._.invoke_impl)();
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
  if ((this->fields).updateSpeed == 0) {
    return;
  }
  pMVar1 = (this->fields).rigidBody;
  if (pMVar1 == (MVRigidBody *)0x0) goto code_?;
  puVar2 = (undefined8 *)
           (*(code *)(pMVar1->klass->vtable).__unknown_1.method)
                     (auStack_3,pMVar1,(pMVar1->klass->vtable).__unknown_2.methodPtr);
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
  fStack_7 = (float)((ulonglong)uVar4 >> 0x20);
  fStack_8 = (float)uVar4;
  if (fStack_7 * fStack_7 + fStack_8 * fStack_8 +
      (float)IStack_5.m_value * (float)IStack_5.m_value < 0.0) {
    func_?();
  }
  fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar10 = _UNK_?;
  if (fVar9 < 0.0) {
    fVar9 = 0.0;
  }
  else if (_UNK_? < fVar9) {
    fVar9 = _UNK_?;
  }
  bVar11 = (this->fields).prevFading;
  in_stack_12 = (fVar6 - in_stack_12) * fVar9 + in_stack_12;
  (this->fields).curSpeed = in_stack_12;
  if (fVar10 < in_stack_12) {
    (this->fields).fading = 0;
    if (bVar11 != 0) {
      (this->fields).currFade = 0.0;
      (this->fields).prevFading = 0;
    }
    if ((this->fields).noHiding == 0) {
      pCVar13 = (this->fields).speedGroup;
      if (pCVar13 == (CanvasGroup *)0x0) goto code_?;
      fVar6 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                         (pCVar13,(MethodInfo *)0x0);
      if (fVar6 < _UNK_?) {
        fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar6 = fVar6 + (float)IStack_5.m_value;
        (this->fields).currFade = fVar6;
        if (fVar6 <= (this->fields).fadeTime) {
          pCVar13 = (this->fields).speedGroup;
          if (fVar6 < 0.0) {
            fVar10 = 0.0;
          }
          else {
            fVar10 = _UNK_?;
            if (fVar6 <= _UNK_?) {
              fVar10 = fVar6;
            }
          }
          if (pCVar13 == (CanvasGroup *)0x0) goto code_?;
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (pCVar13,fVar10 + 0.0,(MethodInfo *)0x0);
        }
        pCVar13 = (this->fields).speedGroup;
        if (pCVar13 == (CanvasGroup *)0x0) goto code_?;
        fStack_14 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                              (pCVar13,(MethodInfo *)0x0);
        if ((_UNK_? <= fStack_14) &&
           (pAVar15 = (this->fields).OnShowHide, pAVar15 != (Action_2_Boolean_Single_ *)0x0)) {
          pCVar13 = (this->fields).speedGroup;
          if (pCVar13 == (CanvasGroup *)0x0) goto code_?;
          fStack_16 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                                (pCVar13,(MethodInfo *)0x0);
          pvVar17 = (pAVar15->fields)._._.method;
          uVar18 = 1;
          goto code_?;
        }
      }
    }
  }
  else {
    (this->fields).fading = 1;
    if (bVar11 != 1) {
      (this->fields).currFade = 0.0;
      (this->fields).prevFading = 1;
    }
    if ((this->fields).noHiding == 0) {
      pCVar13 = (this->fields).speedGroup;
      if (pCVar13 == (CanvasGroup *)0x0) goto code_?;
      fVar6 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                         (pCVar13,(MethodInfo *)0x0);
      if (0.0 < fVar6) {
        fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar6 = fVar6 + (float)IStack_5.m_value;
        (this->fields).currFade = fVar6;
        if (fVar6 <= (this->fields).fadeTime) {
          pCVar13 = (this->fields).speedGroup;
          if (fVar6 < 0.0) {
            fVar6 = 0.0;
          }
          else if (_UNK_? < fVar6) {
            fVar6 = _UNK_?;
          }
          if (pCVar13 == (CanvasGroup *)0x0) goto code_?;
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (pCVar13,fVar6 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
        }
        pCVar13 = (this->fields).speedGroup;
        if (pCVar13 == (CanvasGroup *)0x0) goto code_?;
        fStack_14 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                              (pCVar13,(MethodInfo *)0x0);
        if ((fStack_14 <= 0.0) &&
           (pAVar15 = (this->fields).OnShowHide, pAVar15 != (Action_2_Boolean_Single_ *)0x0)) {
          pCVar13 = (this->fields).speedGroup;
          if (pCVar13 == (CanvasGroup *)0x0) goto code_?;
          fStack_16 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                                (pCVar13,(MethodInfo *)0x0);
          pvVar17 = (pAVar15->fields)._._.method;
          uVar18 = 0;
code_?:
          (*(pAVar15->fields)._._.invoke_impl)
                    ((pAVar15->fields)._._.method_code,uVar18,fStack_16,pvVar17);
        }
      }
    }
  }
  pTVar19 = (this->fields).speedText;
  IStack_5.m_value = (int32_t)(this->fields).curSpeed;
  pSVar20 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_5,(MethodInfo *)0x0);
  pSVar21 = ::StringLiteral__;
  if (pSVar20 != (String *)0x0) {
    pSVar21 = pSVar20;
  }
  if (pTVar19 != (Text *)0x0) {
    (*(code *)(pTVar19->klass->vtable).set_text.method)
              (pTVar19,pSVar21,(pTVar19->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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

