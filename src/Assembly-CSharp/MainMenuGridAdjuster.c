
/* Int32 GetActiveButtonCount() */

int32_t Assembly-CSharp.dll::MainMenuGridAdjuster::MainMenuGridAdjuster_GetActiveButtonCount
                  (MainMenuGridAdjuster *this,MethodInfo *method)

{
  index = 0;
  iVar1 = 0;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  while (pTVar2 != (Transform *)0x0) {
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                      (pTVar2,(MethodInfo *)0x0);
    if (iVar3 <= index) {
      return iVar1;
    }
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (((pTVar2 == (Transform *)0x0) ||
        (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetChild
                             (pTVar2,index,(MethodInfo *)0x0), this_00 == (Transform *)0x0)) ||
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0), this_01 == (GameObject *)0x0))
    break;
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (this_01,(MethodInfo *)0x0);
    index = index + 1;
    iVar1 = (int)&pTVar2->klass + (uint)bVar4;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
  }
  func_?();
  pcVar5 = (code *)swi(3);
  iVar3 = (*pcVar5)();
  return iVar3;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::MainMenuGridAdjuster::MainMenuGridAdjuster_OnDestroy
               (MainMenuGridAdjuster *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__MainMenuGridAdjuster__SetGridSizeAndPosition__);
    func_?(&TypeInfo__PhysicalBasedCanvasScaling);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__PhysicalBasedCanvasScaling->static_fields->OnScreenDimentionsChanged;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__MainMenuGridAdjuster__SetGridSizeAndPosition__,
             (MethodInfo *)0x0);
  pAStack2 =
       (Action *)
       mscorlib.dll::System::Delegate::Delegate_Remove
                 ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAStack2 == (Action *)0x0) {
    TypeInfo__PhysicalBasedCanvasScaling->static_fields->OnScreenDimentionsChanged = (Action *)0x0;
    pAVar1 = (Action *)0x0;
code_?:
    pAStack2 = (Action *)TypeInfo__PhysicalBasedCanvasScaling->static_fields;
    pAStack3 = (Action__Class *)pAVar1;
    func_?();
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    (*pcRam_?)();
    return;
  }
  pAVar1 = (Action *)0x0;
  if (pAStack2->klass == TypeInfo__System__Action) {
    pAVar1 = pAStack2;
  }
  if (pAVar1 == (Action *)0x0) {
    pAStack3 = TypeInfo__System__Action;
    func_?();
    pAStack2 = extraout_ECX;
    pAStack3 = extraout_EDX;
  }
  else {
    TypeInfo__PhysicalBasedCanvasScaling->static_fields->OnScreenDimentionsChanged = pAVar1;
    pAVar1 = (Action *)0x0;
    if (pAStack2->klass == TypeInfo__System__Action) {
      pAVar1 = pAStack2;
    }
    pAStack3 = TypeInfo__System__Action;
    if (pAVar1 != (Action *)0x0) goto code_?;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetGridSizeAndPosition() */

void Assembly-CSharp.dll::MainMenuGridAdjuster::MainMenuGridAdjuster_SetGridSizeAndPosition
               (MainMenuGridAdjuster *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Screen_height___0_u000AheightBudget_);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) ||
     (bVar1 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                        ((MethodInfo *)0x0), bVar1 == 0)) {
    fVar2 = (this->fields).bottomOffsetWithoutGamePasses;
  }
  else {
    fVar2 = (this->fields).bottomOffsetWithGamePasses;
  }
  iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                        ((Vector3 *)&stack0xffffffc8,this_00,(MethodInfo *)0x0);
    fVar5 = pVVar4->y;
    pGVar6 = (this->fields).grid;
    fVar7 = (this->fields).topOffset;
    if ((pGVar6 != (GridLayoutGroup *)0x0) &&
       (pRVar8 = (pGVar6->fields)._.m_Padding, pRVar8 != (RectOffset *)0x0)) {
      iVar9 = UnityEngine.CoreModule.dll::UnityEngine::RectOffset::RectOffset_get_top
                         (pRVar8,(MethodInfo *)0x0);
      pGVar6 = (this->fields).grid;
      if ((pGVar6 != (GridLayoutGroup *)0x0) &&
         (pRVar8 = (pGVar6->fields)._.m_Padding, pRVar8 != (RectOffset *)0x0)) {
        iVar10 = UnityEngine.CoreModule.dll::UnityEngine::RectOffset::RectOffset_get_bottom
                           (pRVar8,(MethodInfo *)0x0);
        arg0 = (Object *)func_?();
        arg1 = (Object *)func_?();
        message = mscorlib.dll::System::String::String_Format_1
                            (StringLiteral_Screen_height___0_u000AheightBudget_,arg0,arg1,
                             (MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)message,(MethodInfo *)0x0);
        if ((this->fields).activeButtons < 1) {
          MainMenuGridAdjuster_GetActiveButtonCount(this,(MethodInfo *)0x0);
        }
        if ((this->fields).grid != (GridLayoutGroup *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          func_?();
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          func_?();
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          fVar11 = (float10)func_?();
          pGVar6 = (this->fields).grid;
          dVar12 = (double)fVar11;
          if ((pGVar6 != (GridLayoutGroup *)0x0) &&
             (pRVar8 = (pGVar6->fields)._.m_Padding, pRVar8 != (RectOffset *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::RectOffset::RectOffset_get_left
                      (pRVar8,(MethodInfo *)0x0);
            pGVar6 = (this->fields).grid;
            if ((pGVar6 != (GridLayoutGroup *)0x0) &&
               (pRVar8 = (pGVar6->fields)._.m_Padding, pRVar8 != (RectOffset *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::RectOffset::RectOffset_get_right
                        (pRVar8,(MethodInfo *)0x0);
              pGVar6 = (this->fields).grid;
              if (pGVar6 != (GridLayoutGroup *)0x0) {
                fVar13 = (pGVar6->fields).m_Spacing.x;
                fVar14 = (float)(pGVar6->fields).m_Constraint;
                pRVar8 = (pGVar6->fields)._.m_Padding;
                if (pRVar8 != (RectOffset *)0x0) {
                  iVar15 = UnityEngine.CoreModule.dll::UnityEngine::RectOffset::RectOffset_get_top
                                     (pRVar8,(MethodInfo *)0x0);
                  pGVar6 = (this->fields).grid;
                  if ((pGVar6 != (GridLayoutGroup *)0x0) &&
                     (pRVar8 = (pGVar6->fields)._.m_Padding, pRVar8 != (RectOffset *)0x0)) {
                    iVar16 = UnityEngine.CoreModule.dll::UnityEngine::RectOffset::
                             RectOffset_get_bottom(pRVar8,(MethodInfo *)0x0);
                    pRVar17 = (this->fields).rectTransform;
                    if (pRVar17 != (RectTransform *)0x0) {
                      value.y = (float)((uint)(((((((float)iVar3 / fVar5 - fVar7) - fVar2) -
                                                 (float)iVar9) - (float)iVar10) * _UNK_? +
                                               (this->fields).topOffset) -
                                              ((float)(iVar16 + iVar15) +
                                              (float)((int)dVar12 + -1) * fVar14 +
                                              (float)(int)dVar12 * fVar13) * _UNK_?) ^
                                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                       );
                      value.x = 40.0;
                      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                      RectTransform_set_anchoredPosition(pRVar17,value,(MethodInfo *)0x0);
                      pRVar17 = (this->fields).rectTransform;
                      if (pRVar17 != (RectTransform *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_set_sizeDelta(pRVar17,(Vector2)0x0,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::MainMenuGridAdjuster::MainMenuGridAdjuster_Start
               (MainMenuGridAdjuster *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    UnityEngine__UI__GridLayoutGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::GridLayoutGroup>__
                   );
    func_?(&MethodInfo__MainMenuGridAdjuster__SetGridSizeAndPosition__);
    func_?(&TypeInfo__PhysicalBasedCanvasScaling);
    func_?(&TypeInfo__UnityEngine__RectTransform);
    cRam_? = '\x01';
  }
  pGVar1 = (GridLayoutGroup *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__UI__GridLayoutGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::GridLayoutGroup>__
                     );
  (this->fields).grid = pGVar1;
  func_?(&(this->fields).grid,pGVar1);
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar2 == (Transform *)0x0) {
    (this->fields).rectTransform = (RectTransform *)0x0;
    pTVar3 = (Transform *)0x0;
  }
  else {
    pTVar3 = (Transform *)0x0;
    if (pTVar2->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar3 = pTVar2;
    }
    (this->fields).rectTransform = (RectTransform *)pTVar3;
    pTVar3 = (Transform *)0x0;
    if (pTVar2->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar3 = pTVar2;
    }
  }
  func_?(&(this->fields).rectTransform,pTVar3);
  pAVar4 = TypeInfo__PhysicalBasedCanvasScaling->static_fields->OnScreenDimentionsChanged;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__MainMenuGridAdjuster__SetGridSizeAndPosition__,
             (MethodInfo *)0x0);
  pAVar4 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar4 == (Action *)0x0) {
    TypeInfo__PhysicalBasedCanvasScaling->static_fields->OnScreenDimentionsChanged = (Action *)0x0;
code_?:
    func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    method_00 = TypeInfo__MainMenuGridAdjuster___UpdateGridPeriodically_d__9;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?();
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
    return;
  }
  pAVar5 = (Action *)0x0;
  if (pAVar4->klass == TypeInfo__System__Action) {
    pAVar5 = pAVar4;
  }
  if (pAVar5 == (Action *)0x0) {
    func_?();
  }
  else {
    TypeInfo__PhysicalBasedCanvasScaling->static_fields->OnScreenDimentionsChanged = pAVar5;
    pAVar5 = (Action *)0x0;
    if (pAVar4->klass == TypeInfo__System__Action) {
      pAVar5 = pAVar4;
    }
    if (pAVar5 != (Action *)0x0) goto code_?;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* IEnumerator UpdateGridPeriodically() */

IEnumerator *
Assembly-CSharp.dll::MainMenuGridAdjuster::MainMenuGridAdjuster_UpdateGridPeriodically
          (MainMenuGridAdjuster *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainMenuGridAdjuster___UpdateGridPeriodically_d__9);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MainMenuGridAdjuster___UpdateGridPeriodically_d__9;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* MainMenuGridAdjuster() */

void Assembly-CSharp.dll::MainMenuGridAdjuster::MainMenuGridAdjuster__ctor
               (MainMenuGridAdjuster *this,MethodInfo *method)

{
  (this->fields).topOffset = 175.0;
  (this->fields).bottomOffsetWithoutGamePasses = 40.0;
  (this->fields).bottomOffsetWithGamePasses = 380.0;
  (this->fields).pollFrequency = 0.5;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

