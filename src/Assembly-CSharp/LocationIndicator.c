
/* Void Awake() */

void Assembly-CSharp.dll::LocationIndicator::LocationIndicator_Awake
               (LocationIndicator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                   );
    cRam_? = '\x01';
  }
  pRVar1 = (RectTransform *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                     );
  (this->fields).rectTransform = pRVar1;
  func_?();
  return;
}


/* Vector3 CompensateSideTargetAccuracy(Vector3, Single) */

Vector3 * Assembly-CSharp.dll::LocationIndicator::LocationIndicator_CompensateSideTargetAccuracy
                    (Vector3 *__return_storage_ptr__,LocationIndicator *this,Vector3 screenPoint,
                    float sideMeasurement,MethodInfo *method)

{
  __return_storage_ptr__->x = (float)(int)screenPoint._0_8_;
  __return_storage_ptr__->y = (float)(int)((ulonglong)screenPoint._0_8_ >> 0x20);
  __return_storage_ptr__->z = screenPoint.z;
  if (0.0 <= screenPoint.x) {
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    bVar2 = (float)iVar1 < screenPoint.x;
  }
  else {
    bVar2 = true;
  }
  if (0.0 <= screenPoint.y) {
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    bVar3 = (float)iVar1 < screenPoint.y;
  }
  else {
    bVar3 = true;
  }
  fVar4 = (_UNK_? - (float)((uint)sideMeasurement & _UNK_?)) / _UNK_?;
  if ((bVar2) &&
     ((!bVar3 ||
      ((float)((uint)screenPoint.y & _UNK_?) < (float)((uint)screenPoint.x & _UNK_?)))
     )) {
    fVar5 = __return_storage_ptr__->y;
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (_UNK_? < fVar4) {
      fVar4 = _UNK_?;
    }
    __return_storage_ptr__->y = ((float)(iVar1 / 2) - fVar5) * fVar4 + fVar5;
    return __return_storage_ptr__;
  }
  if (bVar3) {
    fVar5 = __return_storage_ptr__->x;
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (_UNK_? < fVar4) {
      fVar4 = _UNK_?;
    }
    fVar4 = fVar4 * _UNK_? * fVar4 * fVar4 + fVar4 * _UNK_? * fVar4;
    __return_storage_ptr__->x = (float)(iVar1 / 2) * fVar4 + (_UNK_? - fVar4) * fVar5;
  }
  return __return_storage_ptr__;
}


/* Vector3 FlipScreenPoint(Vector3) */

Vector3 * Assembly-CSharp.dll::LocationIndicator::LocationIndicator_FlipScreenPoint
                    (Vector3 *__return_storage_ptr__,LocationIndicator *this,Vector3 screenPoint,
                    MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  fVar2 = (fStack_3 - screenPoint.x) - fStack_3 * _UNK_?;
  fVar4 = ((float)iVar1 - screenPoint.y) - (float)iVar1 * _UNK_?;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar5 = (double)(fVar2 * fVar2 + fVar4 * fVar4 + _UNK_?);
  if (dVar5 < 0.0) {
    func_?();
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  fVar6 = (float)dVar5;
  if (_UNK_? < fVar6) {
    fVar7 = 0.0 / fVar6;
    uVar8 = CONCAT44(fVar4 / fVar6,fVar2 / fVar6);
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar8._0_4_ = (pVVar9->zeroVector).x;
    uVar8._4_4_ = (pVVar9->zeroVector).y;
    fVar7 = (pVVar9->zeroVector).z;
  }
  iVar10 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  if (iVar1 < iVar10) {
    iVar1 = iVar10;
  }
  fVar4 = (float)iVar1;
  fStack_11 = (float)((ulonglong)uVar8 >> 0x20);
  fStack_12 = (float)uVar8;
  __return_storage_ptr__->x = fVar7 * fVar4 + (0.0 - screenPoint.z);
  __return_storage_ptr__->y = fVar2 * fVar4 + fStack_12;
  __return_storage_ptr__->z = fVar4 * 0.0 + fStack_11;
  return __return_storage_ptr__;
}


/* Vector3 GetAvatarScreenPoint(Vector3, Single) */

Vector3 * Assembly-CSharp.dll::LocationIndicator::LocationIndicator_GetAvatarScreenPoint
                    (Vector3 *__return_storage_ptr__,LocationIndicator *this,Vector3 avatarPos,
                    float distance,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (this_00 = (pMVar1->fields).mainCamera, this_00 != (Camera *)0x0)) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                       ((Vector3 *)&stack0xfffffff0,this_00,avatarPos,(MethodInfo *)0x0);
    fVar3 = pVVar2->y;
    fVar4 = pVVar2->z;
    __return_storage_ptr__->x = pVVar2->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    fVar3 = __return_storage_ptr__->z / distance;
    if (fVar3 < 0.0) {
      uVar5 = pVVar2->x;
      uVar6 = pVVar2->y;
      screenPoint.y = (float)uVar6;
      screenPoint.x = (float)uVar5;
      screenPoint.z = fVar4;
      pVVar2 = LocationIndicator_FlipScreenPoint
                         ((Vector3 *)&stack0xfffffff0,this,screenPoint,(MethodInfo *)0x0);
      fVar3 = 0.0;
      fVar7 = pVVar2->y;
      fVar4 = pVVar2->z;
      __return_storage_ptr__->x = pVVar2->x;
      __return_storage_ptr__->y = fVar7;
      __return_storage_ptr__->z = fVar4;
    }
    if ((float)((uint)fVar3 & _UNK_?) < _UNK_?) {
      pVVar2 = LocationIndicator_CompensateSideTargetAccuracy
                         ((Vector3 *)&stack0xfffffff0,this,*__return_storage_ptr__,fVar3,
                          (MethodInfo *)0x0);
      fVar4 = pVVar2->y;
      fVar3 = pVVar2->z;
      __return_storage_ptr__->x = pVVar2->x;
      __return_storage_ptr__->y = fVar4;
      __return_storage_ptr__->z = fVar3;
    }
    return __return_storage_ptr__;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar8)();
  return pVVar2;
}


/* Void Initialize(MVPlayer) */

void Assembly-CSharp.dll::LocationIndicator::LocationIndicator_Initialize
               (LocationIndicator *this,MVPlayer *player,MethodInfo *method)

{
  ppMVar1 = &(this->fields).player;
  *ppMVar1 = player;
  func_?(ppMVar1,player);
  if (((player != (MVPlayer *)0x0) &&
      (pUVar2 = (player->fields)._UserProfileData_k__BackingField, pUVar2 != (UserProfileData *)0x0)
      ) && (pTVar3 = (this->fields).nameText, pTVar3 != (Text *)0x0)) {
    (*(code *)(pTVar3->klass->vtable).set_text.method)
              (pTVar3,(pUVar2->fields).UserName,
               (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetAlignments(Vector3) */

void Assembly-CSharp.dll::LocationIndicator::LocationIndicator_SetAlignments
               (LocationIndicator *this,Vector3 screenPoint,MethodInfo *method)

{
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  fVar2 = (this->fields).width;
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  if (screenPoint.x < (float)iVar1 * _UNK_? + fVar2 * _UNK_?) {
    pRVar3 = (this->fields).rectTransform;
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
                      (pRVar3,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
              (pRVar3,(Vector2)((ulonglong)VVar4 & 0xffffffff00000000),(MethodInfo *)VVar4.x);
    pRVar3 = (this->fields).rectTransform;
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
                      (pRVar3,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
              (pRVar3,(Vector2)((ulonglong)VVar4 & 0xffffffff00000000),(MethodInfo *)0x0);
    pRVar3 = (this->fields).rectTransform;
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                      (pRVar3,(MethodInfo *)0x0);
    screenPoint.y = (float)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
              (pRVar3,(Vector2)((ulonglong)VVar4 & 0xffffffff00000000),(MethodInfo *)0x0);
    pRVar3 = (this->fields).textRectTransform;
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
              (pRVar3,(Vector2)0x3f00000000000000,(MethodInfo *)0x0);
    pRVar3 = (this->fields).textRectTransform;
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
              (pRVar3,(Vector2)0x3f00000000000000,(MethodInfo *)0x0);
    pRVar3 = (this->fields).textRectTransform;
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
              (pRVar3,(Vector2)0x3f00000000000000,(MethodInfo *)0x0);
    pLVar5 = (this->fields).layoutGroup;
    if (pLVar5 == (LayoutGroup *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::LayoutGroup::LayoutGroup_set_childAlignment
              (pLVar5,TextAnchor__Enum_MiddleLeft,(MethodInfo *)0x0);
    pTVar6 = (this->fields).nameText;
    if (pTVar6 == (Text *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_alignment
              (pTVar6,TextAnchor__Enum_LowerLeft,(MethodInfo *)0x0);
    pTVar6 = (this->fields).ownershipText;
    if (pTVar6 == (Text *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_alignment
              (pTVar6,TextAnchor__Enum_MiddleLeft,(MethodInfo *)0x0);
    pTVar6 = (this->fields).distanceText;
    if (pTVar6 == (Text *)0x0) goto code_?;
    in_stack_7 = (MethodInfo *)0x0;
code_?:
    UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_alignment
              (pTVar6,TextAnchor__Enum_UpperLeft,in_stack_7);
  }
  else {
    LocationIndicator_get_Max(this,(MethodInfo *)0x0);
    pRVar3 = (this->fields).rectTransform;
    if (in_stack_8 < screenPoint.x) {
      if (pRVar3 == (RectTransform *)0x0) goto code_?;
      VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
                        (pRVar3,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                (pRVar3,VVar4,(MethodInfo *)0x3f800000);
      pRVar3 = (this->fields).rectTransform;
      if (pRVar3 == (RectTransform *)0x0) goto code_?;
      VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
                        (pRVar3,(MethodInfo *)0x0);
      screenPoint.y = 0.0;
      VVar4.y = VVar4.y;
      VVar4.x = 1.0;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                (pRVar3,VVar4,(MethodInfo *)0x0);
      pRVar3 = (this->fields).rectTransform;
      if (pRVar3 == (RectTransform *)0x0) goto code_?;
      VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                        (pRVar3,(MethodInfo *)0x0);
      VVar9.y = VVar4.y;
      VVar9.x = 1.0;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                (pRVar3,VVar9,(MethodInfo *)0x0);
      pRVar3 = (this->fields).textRectTransform;
      if (pRVar3 == (RectTransform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                (pRVar3,(Vector2)0x3f0000003f800000,(MethodInfo *)0x0);
      pRVar3 = (this->fields).textRectTransform;
      if (pRVar3 == (RectTransform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                (pRVar3,(Vector2)0x3f0000003f800000,(MethodInfo *)0x0);
      pRVar3 = (this->fields).textRectTransform;
      if (pRVar3 == (RectTransform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                (pRVar3,(Vector2)0x3f0000003f800000,(MethodInfo *)0x0);
      pLVar5 = (this->fields).layoutGroup;
      if (pLVar5 == (LayoutGroup *)0x0) goto code_?;
      UnityEngine.UI.dll::UnityEngine::UI::LayoutGroup::LayoutGroup_set_childAlignment
                (pLVar5,TextAnchor__Enum_MiddleRight,(MethodInfo *)0x0);
      pTVar6 = (this->fields).nameText;
      if (pTVar6 == (Text *)0x0) goto code_?;
      UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_alignment
                (pTVar6,TextAnchor__Enum_LowerRight,(MethodInfo *)0x0);
      pTVar6 = (this->fields).ownershipText;
      if (pTVar6 == (Text *)0x0) goto code_?;
      UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_alignment
                (pTVar6,TextAnchor__Enum_MiddleRight,(MethodInfo *)0x0);
      pTVar6 = (this->fields).distanceText;
      if (pTVar6 == (Text *)0x0) goto code_?;
      goto code_?;
    }
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
                      (pRVar3,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
              (pRVar3,VVar4,(MethodInfo *)0x3f000000);
    pRVar3 = (this->fields).rectTransform;
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    VVar9 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
                      (pRVar3,(MethodInfo *)0x0);
    screenPoint.y = 0.0;
    value_00.y = VVar9.y;
    value_00.x = 0.5;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
              (pRVar3,value_00,(MethodInfo *)0x0);
    pRVar3 = (this->fields).rectTransform;
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                      (pRVar3,(MethodInfo *)0x0);
    value_01.y = VVar4.y;
    value_01.x = 0.5;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
              (pRVar3,value_01,(MethodInfo *)0x0);
    pRVar3 = (this->fields).textRectTransform;
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
              (pRVar3,(Vector2)0x3f0000003f000000,(MethodInfo *)0x0);
    pRVar3 = (this->fields).textRectTransform;
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
              (pRVar3,(Vector2)0x3f0000003f000000,(MethodInfo *)0x0);
    pRVar3 = (this->fields).textRectTransform;
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
              (pRVar3,(Vector2)0x3f0000003f000000,(MethodInfo *)0x0);
    pLVar5 = (this->fields).layoutGroup;
    if (pLVar5 == (LayoutGroup *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::LayoutGroup::LayoutGroup_set_childAlignment
              (pLVar5,TextAnchor__Enum_MiddleCenter,(MethodInfo *)0x0);
    pTVar6 = (this->fields).nameText;
    if (pTVar6 == (Text *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_alignment
              (pTVar6,TextAnchor__Enum_LowerCenter,(MethodInfo *)0x0);
    pTVar6 = (this->fields).ownershipText;
    if (pTVar6 == (Text *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_alignment
              (pTVar6,TextAnchor__Enum_MiddleCenter,(MethodInfo *)0x0);
    pTVar6 = (this->fields).distanceText;
    if (pTVar6 == (Text *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_alignment
              (pTVar6,TextAnchor__Enum_UpperCenter,(MethodInfo *)0x0);
    screenPoint_00.y = 0.0;
    screenPoint_00.x = VVar9.y;
    screenPoint_00.z = screenPoint.z;
    LocationIndicator_SetIndicatorPosition(this,screenPoint_00,(MethodInfo *)0x0);
  }
  LocationIndicator_get_Max(this,(MethodInfo *)0x0);
  pRVar3 = (this->fields).rectTransform;
  if (VVar4.y < screenPoint.y) {
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
              (pRVar3,(MethodInfo *)0x0);
    value_03.y = 1.0;
    value_03.x = screenPoint.y;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
              (pRVar3,value_03,(MethodInfo *)0x0);
    pRVar3 = (this->fields).rectTransform;
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
              (pRVar3,(MethodInfo *)0x0);
    value_05.y = 1.0;
    value_05.x = screenPoint.y;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
              (pRVar3,value_05,(MethodInfo *)0x0);
    pRVar3 = (this->fields).rectTransform;
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                      (pRVar3,(MethodInfo *)0x0);
    fVar2 = VVar4.x;
    screenPoint.z = 1.0;
  }
  else {
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
              (pRVar3,(MethodInfo *)0x0);
    value_02.y = 0.0;
    value_02.x = screenPoint.y;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
              (pRVar3,value_02,(MethodInfo *)0x0);
    pRVar3 = (this->fields).rectTransform;
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
              (pRVar3,(MethodInfo *)0x0);
    value_04.y = 0.0;
    value_04.x = screenPoint.y;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
              (pRVar3,value_04,(MethodInfo *)0x0);
    pRVar3 = (this->fields).rectTransform;
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                      (pRVar3,(MethodInfo *)0x0);
    fVar2 = VVar4.x;
    screenPoint.z = 0.0;
  }
  value_06.y = screenPoint.z;
  value_06.x = fVar2;
  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
            (pRVar3,value_06,(MethodInfo *)0x0);
  pRVar3 = (this->fields).textRectTransform;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  value.x = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
  value.y = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
  if (pRVar3 != (RectTransform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
              (pRVar3,value,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetArrowVisibilityAndRotation(Vector3) */

void Assembly-CSharp.dll::LocationIndicator::LocationIndicator_SetArrowVisibilityAndRotation
               (LocationIndicator *this,Vector3 screenPoint,MethodInfo *method)

{
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  fVar2 = (this->fields).width;
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  if ((float)iVar1 * _UNK_? + fVar2 * _UNK_? <= screenPoint.x) {
    VVar3 = LocationIndicator_get_Max(this,(MethodInfo *)0x0);
    fStack_4 = VVar3.x;
    fStack_5 = VVar3.y;
    if (screenPoint.x <= fStack_4) {
      LocationIndicator_get_Min(this,(MethodInfo *)0x0);
      if (fStack_5 <= screenPoint.y) {
        VVar3 = LocationIndicator_get_Max(this,(MethodInfo *)0x0);
        fStack_5 = VVar3.y;
        if (screenPoint.y <= fStack_5) {
          this_00 = (this->fields).arrow;
          if (this_00 != (RectTransform *)0x0) {
            this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this_00,(MethodInfo *)0x0);
            if (this_02 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_02,0,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
      }
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  fVar2 = 0.0;
  func_?();
  this_01 = (Transform *)(this->fields).arrow;
  fVar6 = (float10)func_?();
  euler.y = fVar2;
  euler.x = fVar2;
  euler.z = (((float)fVar6 * _UNK_?) / _UNK_?) * _UNK_?;
  pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     ((Quaternion *)&stack0xffffffc0,euler,(MethodInfo *)0x0);
  if (this_01 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (this_01,*pQVar7,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetDistanceText(Single) */

void Assembly-CSharp.dll::LocationIndicator::LocationIndicator_SetDistanceText
               (LocationIndicator *this,float distance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&StringLiteral__0_);
    func_?();
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  fVar1 = (float10)func_?((double)distance);
  distance = (float)fVar1;
  arg0 = (Object *)func_?(TypeInfo__System__Single,&distance);
  this_00 = mscorlib.dll::System::String::String_Format(StringLiteral__0_,arg0,(MethodInfo *)0x0);
  this_01 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this_01,(MethodInfo *)0x0);
  if (this_00 != (String *)0x0) {
    iVar2 = (this_00->fields)._stringLength;
    puVar3 = (undefined *)(iVar2 / 3);
    if ((0 < (int)puVar3) && (length = (LocationIndicator *)(iVar2 % 3), 0 < (int)length)) {
      pSVar4 = mscorlib.dll::System::String::String_Substring_1
                         (this_00,0,(int32_t)length,(MethodInfo *)0x0);
      if (this_01 == (StringBuilder *)0x0) goto code_?;
      distance = 0.0;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (this_01,pSVar4,(MethodInfo *)0x0);
      distance = 0.0;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (this_01,::StringLiteral__,(MethodInfo *)0x0);
      distance = 0.0;
      puVar3 = &UNK_?;
      this_00 = mscorlib.dll::System::String::String_Remove
                          (this_00,0,(int32_t)length,(MethodInfo *)0x0);
      this = length;
    }
    puVar3 = puVar3 + -1;
    iVar2 = 0;
    if ((int)puVar3 < 1) {
      if (this_01 == (StringBuilder *)0x0) goto code_?;
    }
    else {
      do {
        if (this_00 == (String *)0x0) goto code_?;
        in_stack_5 = &UNK_?;
        pSVar4 = mscorlib.dll::System::String::String_Substring_1(this_00,0,3,(MethodInfo *)0x0);
        if (this_01 == (StringBuilder *)0x0) goto code_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (this_01,pSVar4,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (this_01,::StringLiteral__,(MethodInfo *)0x0);
        this_00 = mscorlib.dll::System::String::String_Remove(this_00,0,3,(MethodInfo *)0x0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)puVar3);
    }
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
              (this_01,this_00,(MethodInfo *)0x0);
    pTVar6 = (this->fields).distanceText;
    pSStack7 =
         mscorlib.dll::System::String::String_Format
                   (StringLiteral__0__m,(Object *)this_01,(MethodInfo *)0x0);
    if (pTVar6 != (Text *)0x0) {
      pTVar8 = pTVar6->klass;
      pIStack9 = (pTVar8->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
      (*(code *)(pTVar8->vtable).set_text.method)();
      return;
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean SetIndicatorPosition(Vector3) */

bool Assembly-CSharp.dll::LocationIndicator::LocationIndicator_SetIndicatorPosition
               (LocationIndicator *this,Vector3 screenPoint,MethodInfo *method)

{
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  fVar2 = (this->fields).width;
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  puStack_3 = (undefined *)screenPoint.y;
  if ((float)iVar1 * _UNK_? + fVar2 * _UNK_? <= screenPoint.x) {
    LocationIndicator_get_Max(this,(MethodInfo *)0x0);
    fVar2 = screenPoint.x;
    if (fStack_4 < screenPoint.x) {
      iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      fVar2 = (float)iVar1 - (float)iVar5 * _UNK_?;
    }
  }
  else {
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    fVar2 = (float)iVar1 * _UNK_?;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  if ((float)iVar1 * _UNK_? <= (float)puStack_3) {
    screenPoint.x = (float)this;
    VVar6 = LocationIndicator_get_Max(this,(MethodInfo *)0x0);
    puVar7 = &UNK_?;
    if (VVar6.y < 3.704409e-29) {
      iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      screenPoint.z = (float)&UNK_?;
      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      puVar7 = (undefined *)((float)iVar1 - (float)iVar5 * _UNK_?);
    }
  }
  else {
    UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    screenPoint.x = (float)&UNK_?;
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    puVar7 = (undefined *)((float)iVar1 * _UNK_?);
  }
  this_00 = (this->fields).rectTransform;
  if ((this_00 != (RectTransform *)0x0) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0), this_01 != (Transform *)0x0)) {
    value.y = (float)puVar7;
    value.x = fVar2;
    value.z = screenPoint.z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_01,value,(MethodInfo *)0x0);
    if (0.0 <= screenPoint.x) {
      iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
      if (screenPoint.x <= (float)iVar1) {
        iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                          ((MethodInfo *)0x0);
        return (float)iVar1 < 0.0;
      }
    }
    return 1;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void SetOwnership(PlanetOwnershipType) */

void Assembly-CSharp.dll::LocationIndicator::LocationIndicator_SetOwnership
               (LocationIndicator *this,PlanetOwnershipType__Enum ownershipType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Editor);
    func_?(&StringLiteral_Play_Tester);
    func_?(&StringLiteral_Owner);
    func_?(&StringLiteral_Spectator);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).ownershipText;
  switch(ownershipType & 0xff) {
  case PlanetOwnershipType__Enum_Editor:
    TM::TM__(StringLiteral_Editor,(MethodInfo *)0x0);
    break;
  case PlanetOwnershipType__Enum_Owner:
    TM::TM__(StringLiteral_Owner,(MethodInfo *)0x0);
    break;
  case PlanetOwnershipType__Enum_Playtester:
    TM::TM__(StringLiteral_Play_Tester,(MethodInfo *)0x0);
    break;
  default:
    break;
  case PlanetOwnershipType__Enum_Spectator:
    TM::TM__(StringLiteral_Spectator,(MethodInfo *)0x0);
  }
  if (pTVar1 == (Text *)0x0) {
    uVar2 = func_?();
    uVar3 = (uint)((ulonglong)uVar2 >> 0x20);
    pTVar1 = (Text *)uVar2;
    puVar4 = (uint *)CONCAT31((int3)((ulonglong)uVar2 >> 8),
                              *(undefined1 *)
                               (unaff_EBX + (uint)*(byte *)(unaff_EBX + ((uint)pTVar1 & 0xff))));
    if (-1 < (int)(uVar3 - *puVar4)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(char *)(unaff_EBX + 0x1cb0ff06) =
         (*(char *)(unaff_EBX + 0x1cb0ff06) - (char)extraout_ECX) - (uVar3 < *puVar4);
    pMVar6 = (MethodInfo *)((int)puVar4 + *puVar4);
    *(char *)(unaff_EBX + 0x31880) = *(char *)(unaff_EBX + 0x31880) + (char)extraout_ECX;
    *(char *)(extraout_ECX + 0x56) =
         *(char *)(extraout_ECX + 0x56) + (char)((ulonglong)uVar2 >> 0x20);
  }
  else {
    pMVar6 = (pTVar1->klass->vtable).set_text.method;
  }
  (*(code *)pMVar6)(pTVar1);
  return;
}


/* Void SetTextRectSize() */

void Assembly-CSharp.dll::LocationIndicator::LocationIndicator_SetTextRectSize
               (LocationIndicator *this,MethodInfo *method)

{
  pLVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pTVar2 = (this->fields).nameText;
  if (pTVar2 != (Text *)0x0) {
    iVar3 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_fontSize(pTVar2,(MethodInfo *)0x0);
    pTVar2 = (this->fields).nameText;
    if ((pTVar2 != (Text *)0x0) &&
       (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pTVar2,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0);
      pTVar2 = (this->fields).ownershipText;
      if (pTVar2 != (Text *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_fontSize(pTVar2,(MethodInfo *)0x0);
        pTVar2 = (this->fields).ownershipText;
        if ((pTVar2 != (Text *)0x0) &&
           (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pTVar2,(MethodInfo *)0x0),
           pTVar4 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                    ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0);
          pTVar2 = (this->fields).distanceText;
          if (pTVar2 != (Text *)0x0) {
            iVar5 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_fontSize
                               (pTVar2,(MethodInfo *)0x0);
            pTVar6 = (this->fields).distanceText;
            if ((pTVar6 != (Text *)0x0) &&
               (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pTVar6,(MethodInfo *)0x0),
               pTVar4 != (Transform *)0x0)) {
              pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                                  ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0);
              pSVar8 = TypeInfo__System__Single;
              fVar9 = _UNK_? / pVVar7->x;
              iVar10 = func_?();
              pTVar6 = (this->fields).nameText;
              if ((pTVar6 != (Text *)0x0) &&
                 ((iVar11 = (*(code *)(pTVar6->klass->vtable).get_text.method)
                                      (pTVar6,(pTVar6->klass->vtable).set_text.methodPtr),
                  iVar11 != 0 && (iVar10 != 0)))) {
                if (*(int *)(iVar10 + 0xc) == 0) goto code_?;
                *(float *)(iVar10 + 0x10) =
                     (float)iVar3 * _UNK_? * (float)pSVar8 * (float)*(int *)(iVar11 + 8);
                pTVar6 = (this->fields).ownershipText;
                if ((pTVar6 != (Text *)0x0) &&
                   (iVar11 = (*(code *)(pTVar6->klass->vtable).get_text.method)
                                       (pTVar6,(pTVar6->klass->vtable).set_text.methodPtr),
                   iVar11 != 0)) {
                  if (*(uint *)(iVar10 + 0xc) < 2) goto code_?;
                  pfVar12 = (float *)(iVar10 + 0x14);
                  *pfVar12 = (float)(int)pTVar2 * _UNK_? * 3.704625e-29 *
                             (float)*(int *)(iVar11 + 8);
                  pTVar2 = (this->fields).distanceText;
                  if ((pTVar2 != (Text *)0x0) &&
                     (iVar11 = (*(code *)(pTVar2->klass->vtable).get_text.method)
                                         (pTVar2,(pTVar2->klass->vtable).set_text.methodPtr),
                     iVar11 != 0)) {
                    if (*(uint *)(iVar10 + 0xc) < 3) goto code_?;
                    *(float *)(iVar10 + 0x18) =
                         (float)iVar5 * _UNK_? * fVar9 * (float)*(int *)(iVar11 + 8);
                    uVar13 = *(uint *)(iVar10 + 0xc);
                    if (uVar13 == 0) {
                      this = (LocationIndicator *)0x0;
                    }
                    else {
                      pLVar14 = *(LocationIndicator **)(iVar10 + 0x10);
                      uVar15 = 1;
                      this = pLVar14;
                      if (1 < (int)uVar13) {
                        bVar16 = 1 < uVar13;
                        do {
                          if (!bVar16) goto code_?;
                          pLVar17 = (LocationIndicator *)*pfVar12;
                          if ((float)pLVar14 < (float)pLVar17) {
                            pLVar14 = pLVar17;
                            this = pLVar17;
                          }
                          uVar15 = uVar15 + 1;
                          pfVar12 = pfVar12 + 1;
                          bVar16 = uVar15 < uVar13;
                        } while ((int)uVar15 < (int)uVar13);
                      }
                    }
                    pRVar18 = (pLVar1->fields).textRectTransform;
                    if (pRVar18 != (RectTransform *)0x0) {
                      VVar19 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                               RectTransform_get_sizeDelta(pRVar18,(MethodInfo *)0x0);
                      VVar19.y = VVar19.y;
                      VVar19.x = (float)this;
                      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                      RectTransform_set_sizeDelta(pRVar18,VVar19,(MethodInfo *)0x0);
                      pTVar4 = (Transform *)(pLVar1->fields).textRectTransform;
                      if (pTVar4 != (Transform *)0x0) {
                        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_lossyScale
                                            ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0);
                        fVar9 = pVVar7->x;
                        pTVar4 = (Transform *)(pLVar1->fields).rectTransform;
                        if (pTVar4 != (Transform *)0x0) {
                          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_lossyScale
                                              ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0
                                              );
                          fVar20 = pVVar7->x;
                          pRVar18 = (pLVar1->fields).rectTransform;
                          if (pRVar18 != (RectTransform *)0x0) {
                            pRVar21 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                      RectTransform_get_rect
                                                ((Rect *)&stack0xffffffd0,pRVar18,(MethodInfo *)0x0);
                            fVar20 = pRVar21->m_Width * fVar20;
                            fVar22 = (float)this * fVar9;
                            if ((float)this * fVar9 <= fVar20) {
                              fVar22 = fVar20;
                            }
                            pTVar4 = (Transform *)(pLVar1->fields).rectTransform;
                            (pLVar1->fields).width = fVar22;
                            if (pTVar4 != (Transform *)0x0) {
                              pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_get_lossyScale
                                                  ((Vector3 *)&stack0xffffffe0,pTVar4,
                                                   (MethodInfo *)0x0);
                              fVar9 = pVVar7->x;
                              pRVar18 = (pLVar1->fields).rectTransform;
                              if (pRVar18 != (RectTransform *)0x0) {
                                pRVar21 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                          RectTransform_get_rect
                                                    ((Rect *)&stack0xffffffd0,pRVar18,
                                                     (MethodInfo *)0x0);
                                (pLVar1->fields).height = pRVar21->m_Height * fVar9;
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
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void SetVisibility(Boolean) */

void Assembly-CSharp.dll::LocationIndicator::LocationIndicator_SetVisibility
               (LocationIndicator *this,bool isVisible,MethodInfo *method)

{
  pRVar1 = (this->fields).arrow;
  if (pRVar1 != (RectTransform *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pRVar1,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,isVisible,(MethodInfo *)0x0);
      pRVar1 = (this->fields).textRectTransform;
      if (pRVar1 != (RectTransform *)0x0) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar1,(MethodInfo *)0x0);
        if (pGVar2 != (GameObject *)0x0) {
          if (pcRam_? == (code *)0x0) {
            pcRam_? = (code *)func_?();
          }
          (*pcRam_?)();
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::LocationIndicator::LocationIndicator_Update
               (LocationIndicator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LocationIndicator);
    cRam_? = '\x01';
  }
  this_01 = this;
  if ((this->fields).player == (MVPlayer *)0x0) {
    return;
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  this_00 = (this_01->fields).player;
  if ((this_00 != (MVPlayer *)0x0) &&
     (id = MVPlayer::MVPlayer_get_WoId(this_00,(MethodInfo *)0x0),
     this_02 != (MVWorldObjectClientManager *)0x0)) {
    pMVar1 = (MVWorldObjectClient *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_02,id,(MethodInfo *)0x0);
    ppMVar2 = &(this_01->fields).avatar;
    *ppMVar2 = pMVar1;
    func_?(ppMVar2,pMVar1);
    pMVar1 = *ppMVar2;
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      return;
    }
    cVar3 = (*(code *)(pMVar1->klass->vtable).get_IsTransformDefined.method)
                      (pMVar1,(pMVar1->klass->vtable).get_WorldRotation_1.methodPtr);
    if (cVar3 == '\0') {
      return;
    }
    pMVar1 = *ppMVar2;
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      puVar4 = (undefined8 *)
                (*(code *)(pMVar1->klass->vtable).get_WorldPosition_1.method)
                          (&stack0xfffffff4,pMVar1,
                           (pMVar1->klass->vtable).set_WorldPosition.methodPtr);
      uVar5 = *puVar4;
      fVar6 = *(float *)(puVar4 + 1);
      if ((TypeInfo__LocationIndicator->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__LocationIndicator);
      }
      uVar7 = (TypeInfo__LocationIndicator->static_fields->AvatarPosOffset).x;
      fVar8 = (TypeInfo__LocationIndicator->static_fields->AvatarPosOffset).z;
      fVar9 = (float)uVar7 + (float)uVar5;
      fVar6 = fVar8 + fVar6;
      pMVar10 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (((pMVar10 != (MainCameraManager *)0x0) &&
          (pCVar11 = (pMVar10->fields).mainCamera, pCVar11 != (Camera *)0x0)) &&
         (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar11,(MethodInfo *)0x0), this_03 != (Transform *)0x0))
      {
        pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffc4,this_03,(MethodInfo *)0x0);
        fVar13 = pVVar12->x;
        uVar14 = pVVar12->y;
        puStack_15 = (undefined *)pVVar12->z;
        fStack_16 = (float)uVar14;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Math,fVar9,fVar6);
          cRam_? = '\x01';
        }
        fVar13 = (float)uVar5 - fVar13;
        fVar8 = fVar8 - fStack_16;
        fVar6 = SUB84(uVar5,4) - (float)puStack_15;
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        if (fVar8 * fVar8 + fVar13 * fVar13 + fVar6 * fVar6 < 0.0) {
          func_?();
        }
        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if ((pMVar10 != (MainCameraManager *)0x0) &&
           (pCVar11 = (pMVar10->fields).mainCamera, pCVar11 != (Camera *)0x0)) {
          position.z = unaff_EBP;
          position.x = (float)(int)in_stack_17;
          position.y = (float)(int)((ulonglong)in_stack_17 >> 0x20);
          pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                              ((Vector3 *)&fStack_16,pCVar11,position,(MethodInfo *)0x0);
          fVar6 = pVVar12->z;
          fVar8 = fVar6 / (float)puStack_15;
          uVar5._0_4_ = pVVar12->x;
          uVar5._4_4_ = pVVar12->y;
          fStack_16 = fVar8;
          if (fVar8 < 0.0) {
            fVar8 = unaff_EBP;
            pVVar12 = LocationIndicator_FlipScreenPoint
                                ((Vector3 *)&stack0x0000000c,this_01,*pVVar12,(MethodInfo *)0x0);
            uVar5._0_4_ = pVVar12->x;
            uVar5._4_4_ = pVVar12->y;
            fVar6 = pVVar12->z;
          }
          if ((float)((uint)fVar8 & _UNK_?) < _UNK_?) {
            screenPoint_01.z = fVar6;
            screenPoint_01.x = (float)(int)uVar5;
            screenPoint_01.y = (float)(int)((ulonglong)uVar5 >> 0x20);
            pVVar12 = LocationIndicator_CompensateSideTargetAccuracy
                                ((Vector3 *)&this,this_01,screenPoint_01,fVar8,(MethodInfo *)0x0);
            uVar5._0_4_ = pVVar12->x;
            uVar5._4_4_ = pVVar12->y;
            fVar6 = pVVar12->z;
            in_stack_18 = (float)(undefined4)uVar5;
          }
          screenPoint_02.z = fVar6;
          screenPoint_02.x = (float)(int)uVar5;
          screenPoint_02.y = (float)(int)((ulonglong)uVar5 >> 0x20);
          bVar19 = LocationIndicator_SetIndicatorPosition(this_01,screenPoint_02,(MethodInfo *)0x0);
          if ((bVar19 == 0) && (this._3_1_ == '\0')) {
            LocationIndicator_SetVisibility(this_01,0,(MethodInfo *)0x0);
            return;
          }
          LocationIndicator_SetVisibility(this_01,1,(MethodInfo *)0x0);
          LocationIndicator_SetDistanceText(this_01,in_stack_20,(MethodInfo *)0x0);
          LocationIndicator_SetTextRectSize(this_01,(MethodInfo *)0x0);
          screenPoint.y = (float)in_stack_21;
          screenPoint.x = (float)in_stack_22;
          screenPoint.z = fVar6;
          this = this_01;
          in_stack_18 = fVar6;
          LocationIndicator_SetAlignments(this_01,screenPoint,(MethodInfo *)0x0);
          screenPoint_00.z = fVar6;
          screenPoint_00._0_8_ = in_stack_23;
          LocationIndicator_SetArrowVisibilityAndRotation(this_01,screenPoint_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* LocationIndicator() */

void Assembly-CSharp.dll::LocationIndicator::LocationIndicator__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LocationIndicator);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->upVector).x;
  uVar3 = (pVVar1->upVector).y;
  fVar4 = (pVVar1->upVector).z * _UNK_?;
  fVar5 = (float)uVar3 * _UNK_?;
  pLVar6 = TypeInfo__LocationIndicator->static_fields;
  (pLVar6->AvatarPosOffset).x = (float)uVar2 * _UNK_?;
  (pLVar6->AvatarPosOffset).y = fVar5;
  (pLVar6->AvatarPosOffset).z = fVar4;
  return;
}


/* Vector2 get_Max() */

Vector2 Assembly-CSharp.dll::LocationIndicator::LocationIndicator_get_Max
                  (LocationIndicator *this,MethodInfo *method)

{
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  fVar3 = (this->fields).width;
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  VVar6.y = ((float)iVar4 - (float)iVar5 * _UNK_?) - (this->fields).height;
  VVar6.x = (float)iVar1 - ((float)iVar2 * _UNK_? + fVar3 * _UNK_?);
  return VVar6;
}


/* Vector2 get_Min() */

Vector2 Assembly-CSharp.dll::LocationIndicator::LocationIndicator_get_Min
                  (LocationIndicator *this,MethodInfo *method)

{
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  fVar2 = (this->fields).width;
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  fVar2 = fVar2 * _UNK_?;
  fVar3 = (float)iVar1 * _UNK_?;
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  VVar4.y = (float)iVar1 * _UNK_?;
  VVar4.x = fVar3 + fVar2;
  return VVar4;
}


/* Vector2 get_Padding() */

Vector2 Assembly-CSharp.dll::LocationIndicator::LocationIndicator_get_Padding
                  (LocationIndicator *this,MethodInfo *method)

{
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  fVar2 = (float)iVar1 * _UNK_?;
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  VVar3.y = (float)iVar1 * _UNK_?;
  VVar3.x = fVar2;
  return VVar3;
}

