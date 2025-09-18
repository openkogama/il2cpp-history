
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
  func_?(&(this->fields).rectTransform,pRVar1);
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
  dVar5 = (double)(fVar4 * fVar4 + fVar2 * fVar2 + _UNK_?);
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
  (this->fields).player = player;
  func_?(&(this->fields).player,player);
  if (((player != (MVPlayer *)0x0) &&
      (pUVar1 = (player->fields)._UserProfileData_k__BackingField, pUVar1 != (UserProfileData *)0x0)
      ) && (pTVar2 = (this->fields).nameText, pTVar2 != (Text *)0x0)) {
    (*(code *)(pTVar2->klass->vtable).set_text.method)
              (pTVar2,(pUVar1->fields).UserName,
               (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetAlignments(Vector3) */

void Assembly-CSharp.dll::LocationIndicator::LocationIndicator_SetAlignments
               (LocationIndicator *this,Vector3 screenPoint,MethodInfo *method)

{
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  fVar2 = (float)iVar1 * _UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  fVar3 = (this->fields).width;
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  if (screenPoint.x < fVar3 * _UNK_? + fVar2) {
    pRVar4 = (this->fields).rectTransform;
    if (pRVar4 == (RectTransform *)0x0) goto code_?;
    VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
                      (pRVar4,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
              (pRVar4,(Vector2)((ulonglong)VVar5 & 0xffffffff00000000),(MethodInfo *)VVar5.x);
    pRVar4 = (this->fields).rectTransform;
    if (pRVar4 == (RectTransform *)0x0) goto code_?;
    VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
                      (pRVar4,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
              (pRVar4,(Vector2)((ulonglong)VVar5 & 0xffffffff00000000),(MethodInfo *)0x0);
    pRVar4 = (this->fields).rectTransform;
    if (pRVar4 == (RectTransform *)0x0) goto code_?;
    VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                      (pRVar4,(MethodInfo *)0x0);
    screenPoint.y = (float)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
              (pRVar4,(Vector2)((ulonglong)VVar5 & 0xffffffff00000000),(MethodInfo *)0x0);
    pRVar4 = (this->fields).textRectTransform;
    if (pRVar4 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
              (pRVar4,(Vector2)0x3f00000000000000,(MethodInfo *)0x0);
    pRVar4 = (this->fields).textRectTransform;
    if (pRVar4 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
              (pRVar4,(Vector2)0x3f00000000000000,(MethodInfo *)0x0);
    pRVar4 = (this->fields).textRectTransform;
    if (pRVar4 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
              (pRVar4,(Vector2)0x3f00000000000000,(MethodInfo *)0x0);
    pLVar6 = (this->fields).layoutGroup;
    if (pLVar6 == (LayoutGroup *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::LayoutGroup::LayoutGroup_set_childAlignment
              (pLVar6,TextAnchor__Enum_MiddleLeft,(MethodInfo *)0x0);
    pTVar7 = (this->fields).nameText;
    if (pTVar7 == (Text *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_alignment
              (pTVar7,TextAnchor__Enum_LowerLeft,(MethodInfo *)0x0);
    pTVar7 = (this->fields).ownershipText;
    if (pTVar7 == (Text *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_alignment
              (pTVar7,TextAnchor__Enum_MiddleLeft,(MethodInfo *)0x0);
    pTVar7 = (this->fields).distanceText;
    if (pTVar7 == (Text *)0x0) goto code_?;
    in_stack_8 = (MethodInfo *)0x0;
code_?:
    UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_alignment
              (pTVar7,TextAnchor__Enum_UpperLeft,in_stack_8);
  }
  else {
    LocationIndicator_get_Max(this,(MethodInfo *)0x0);
    pRVar4 = (this->fields).rectTransform;
    if (in_stack_9 < screenPoint.x) {
      if (pRVar4 == (RectTransform *)0x0) goto code_?;
      VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
                        (pRVar4,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                (pRVar4,VVar5,(MethodInfo *)0x3f800000);
      pRVar4 = (this->fields).rectTransform;
      if (pRVar4 == (RectTransform *)0x0) goto code_?;
      VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
                        (pRVar4,(MethodInfo *)0x0);
      screenPoint.y = 0.0;
      VVar5.y = VVar5.y;
      VVar5.x = 1.0;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                (pRVar4,VVar5,(MethodInfo *)0x0);
      pRVar4 = (this->fields).rectTransform;
      if (pRVar4 == (RectTransform *)0x0) goto code_?;
      VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                        (pRVar4,(MethodInfo *)0x0);
      VVar10.y = VVar5.y;
      VVar10.x = 1.0;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                (pRVar4,VVar10,(MethodInfo *)0x0);
      pRVar4 = (this->fields).textRectTransform;
      if (pRVar4 == (RectTransform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                (pRVar4,(Vector2)0x3f0000003f800000,(MethodInfo *)0x0);
      pRVar4 = (this->fields).textRectTransform;
      if (pRVar4 == (RectTransform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                (pRVar4,(Vector2)0x3f0000003f800000,(MethodInfo *)0x0);
      pRVar4 = (this->fields).textRectTransform;
      if (pRVar4 == (RectTransform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                (pRVar4,(Vector2)0x3f0000003f800000,(MethodInfo *)0x0);
      pLVar6 = (this->fields).layoutGroup;
      if (pLVar6 == (LayoutGroup *)0x0) goto code_?;
      UnityEngine.UI.dll::UnityEngine::UI::LayoutGroup::LayoutGroup_set_childAlignment
                (pLVar6,TextAnchor__Enum_MiddleRight,(MethodInfo *)0x0);
      pTVar7 = (this->fields).nameText;
      if (pTVar7 == (Text *)0x0) goto code_?;
      UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_alignment
                (pTVar7,TextAnchor__Enum_LowerRight,(MethodInfo *)0x0);
      pTVar7 = (this->fields).ownershipText;
      if (pTVar7 == (Text *)0x0) goto code_?;
      UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_alignment
                (pTVar7,TextAnchor__Enum_MiddleRight,(MethodInfo *)0x0);
      pTVar7 = (this->fields).distanceText;
      if (pTVar7 == (Text *)0x0) goto code_?;
      goto code_?;
    }
    if (pRVar4 == (RectTransform *)0x0) goto code_?;
    VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
                      (pRVar4,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
              (pRVar4,VVar5,(MethodInfo *)0x3f000000);
    pRVar4 = (this->fields).rectTransform;
    if (pRVar4 == (RectTransform *)0x0) goto code_?;
    VVar10 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
                      (pRVar4,(MethodInfo *)0x0);
    screenPoint.y = 0.0;
    value_00.y = VVar10.y;
    value_00.x = 0.5;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
              (pRVar4,value_00,(MethodInfo *)0x0);
    pRVar4 = (this->fields).rectTransform;
    if (pRVar4 == (RectTransform *)0x0) goto code_?;
    VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                      (pRVar4,(MethodInfo *)0x0);
    value_01.y = VVar5.y;
    value_01.x = 0.5;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
              (pRVar4,value_01,(MethodInfo *)0x0);
    pRVar4 = (this->fields).textRectTransform;
    if (pRVar4 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
              (pRVar4,(Vector2)0x3f0000003f000000,(MethodInfo *)0x0);
    pRVar4 = (this->fields).textRectTransform;
    if (pRVar4 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
              (pRVar4,(Vector2)0x3f0000003f000000,(MethodInfo *)0x0);
    pRVar4 = (this->fields).textRectTransform;
    if (pRVar4 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
              (pRVar4,(Vector2)0x3f0000003f000000,(MethodInfo *)0x0);
    pLVar6 = (this->fields).layoutGroup;
    if (pLVar6 == (LayoutGroup *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::LayoutGroup::LayoutGroup_set_childAlignment
              (pLVar6,TextAnchor__Enum_MiddleCenter,(MethodInfo *)0x0);
    pTVar7 = (this->fields).nameText;
    if (pTVar7 == (Text *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_alignment
              (pTVar7,TextAnchor__Enum_LowerCenter,(MethodInfo *)0x0);
    pTVar7 = (this->fields).ownershipText;
    if (pTVar7 == (Text *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_alignment
              (pTVar7,TextAnchor__Enum_MiddleCenter,(MethodInfo *)0x0);
    pTVar7 = (this->fields).distanceText;
    if (pTVar7 == (Text *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_alignment
              (pTVar7,TextAnchor__Enum_UpperCenter,(MethodInfo *)0x0);
    screenPoint_00.y = 0.0;
    screenPoint_00.x = VVar10.y;
    screenPoint_00.z = screenPoint.z;
    LocationIndicator_SetIndicatorPosition(this,screenPoint_00,(MethodInfo *)0x0);
  }
  LocationIndicator_get_Max(this,(MethodInfo *)0x0);
  pRVar4 = (this->fields).rectTransform;
  if (VVar5.y < screenPoint.y) {
    if (pRVar4 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
              (pRVar4,(MethodInfo *)0x0);
    value_03.y = 1.0;
    value_03.x = screenPoint.y;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
              (pRVar4,value_03,(MethodInfo *)0x0);
    pRVar4 = (this->fields).rectTransform;
    if (pRVar4 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
              (pRVar4,(MethodInfo *)0x0);
    value_05.y = 1.0;
    value_05.x = screenPoint.y;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
              (pRVar4,value_05,(MethodInfo *)0x0);
    pRVar4 = (this->fields).rectTransform;
    if (pRVar4 == (RectTransform *)0x0) goto code_?;
    VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                      (pRVar4,(MethodInfo *)0x0);
    fVar3 = VVar5.x;
    screenPoint.z = 1.0;
  }
  else {
    if (pRVar4 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
              (pRVar4,(MethodInfo *)0x0);
    value_02.y = 0.0;
    value_02.x = screenPoint.y;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
              (pRVar4,value_02,(MethodInfo *)0x0);
    pRVar4 = (this->fields).rectTransform;
    if (pRVar4 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
              (pRVar4,(MethodInfo *)0x0);
    value_04.y = 0.0;
    value_04.x = screenPoint.y;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
              (pRVar4,value_04,(MethodInfo *)0x0);
    pRVar4 = (this->fields).rectTransform;
    if (pRVar4 == (RectTransform *)0x0) goto code_?;
    VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                      (pRVar4,(MethodInfo *)0x0);
    fVar3 = VVar5.x;
    screenPoint.z = 0.0;
  }
  value_06.y = screenPoint.z;
  value_06.x = fVar3;
  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
            (pRVar4,value_06,(MethodInfo *)0x0);
  pRVar4 = (this->fields).textRectTransform;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  value.x = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
  value.y = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
  if (pRVar4 != (RectTransform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
              (pRVar4,value,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetArrowVisibilityAndRotation(Vector3) */

void Assembly-CSharp.dll::LocationIndicator::LocationIndicator_SetArrowVisibilityAndRotation
               (LocationIndicator *this,Vector3 screenPoint,MethodInfo *method)

{
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  fVar2 = (float)iVar1 * _UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  fVar3 = (this->fields).width;
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  if (fVar3 * _UNK_? + fVar2 <= screenPoint.x) {
    VVar4 = LocationIndicator_get_Max(this,(MethodInfo *)0x0);
    fStack_5 = VVar4.x;
    fStack_6 = VVar4.y;
    if (screenPoint.x <= fStack_5) {
      LocationIndicator_get_Min(this,(MethodInfo *)0x0);
      if (fStack_6 <= screenPoint.y) {
        VVar4 = LocationIndicator_get_Max(this,(MethodInfo *)0x0);
        fStack_6 = VVar4.y;
        if (screenPoint.y <= fStack_6) {
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
  fVar3 = 0.0;
  func_?();
  this_01 = (Transform *)(this->fields).arrow;
  fVar7 = (float10)func_?();
  euler.y = fVar3;
  euler.x = fVar3;
  euler.z = (((float)fVar7 * _UNK_?) / _UNK_?) * _UNK_?;
  pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     ((Quaternion *)&stack0xffffffb0,euler,(MethodInfo *)0x0);
  if (this_01 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (this_01,*pQVar8,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetDistanceText(Single) */

void Assembly-CSharp.dll::LocationIndicator::LocationIndicator_SetDistanceText
               (LocationIndicator *this,float distance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?();
    func_?(&StringLiteral__0__m);
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
    puVar2 = (undefined *)((this_00->fields)._stringLength / 3);
    if ((0 < (int)puVar2) &&
       (length = (LocationIndicator *)((this_00->fields)._stringLength % 3), 0 < (int)length)) {
      pSVar3 = mscorlib.dll::System::String::String_Substring_1
                         (this_00,0,(int32_t)length,(MethodInfo *)0x0);
      if (this_01 == (StringBuilder *)0x0) goto code_?;
      distance = 0.0;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (this_01,pSVar3,(MethodInfo *)0x0);
      distance = 0.0;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (this_01,::StringLiteral__,(MethodInfo *)0x0);
      distance = 0.0;
      puVar2 = &UNK_?;
      this_00 = mscorlib.dll::System::String::String_Remove
                          (this_00,0,(int32_t)length,(MethodInfo *)0x0);
      this = length;
    }
    puVar2 = puVar2 + -1;
    iVar4 = 0;
    if ((int)puVar2 < 1) {
      if (this_01 == (StringBuilder *)0x0) goto code_?;
    }
    else {
      do {
        if (this_00 == (String *)0x0) goto code_?;
        in_stack_5 = &UNK_?;
        pSVar3 = mscorlib.dll::System::String::String_Substring_1(this_00,0,3,(MethodInfo *)0x0);
        if (this_01 == (StringBuilder *)0x0) goto code_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (this_01,pSVar3,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (this_01,::StringLiteral__,(MethodInfo *)0x0);
        this_00 = mscorlib.dll::System::String::String_Remove(this_00,0,3,(MethodInfo *)0x0);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)puVar2);
    }
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
              (this_01,this_00,(MethodInfo *)0x0);
    pTVar6 = (this->fields).distanceText;
    pSStack7 =
         mscorlib.dll::System::String::String_Format
                   (StringLiteral__0__m,(Object *)this_01,(MethodInfo *)0x0);
    if (pTVar6 != (Text *)0x0) {
      pIStack8 = (pTVar6->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
      pTStack9 = pTVar6;
      (*(code *)(pTVar6->klass->vtable).set_text.method)();
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
  fVar2 = (float)iVar1 * _UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  fVar3 = (this->fields).width;
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  puStack_4 = (undefined *)screenPoint.y;
  if (fVar3 * _UNK_? + fVar2 <= screenPoint.x) {
    LocationIndicator_get_Max(this,(MethodInfo *)0x0);
    fVar3 = screenPoint.x;
    if (fStack_5 < screenPoint.x) {
      iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
      iVar6 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      fVar3 = (float)iVar6 * _UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      fVar3 = (float)iVar1 - fVar3;
    }
  }
  else {
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    fVar3 = (float)iVar1 * _UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  if ((float)iVar1 * _UNK_? <= (float)puStack_4) {
    screenPoint.x = (float)this;
    VVar7 = LocationIndicator_get_Max(this,(MethodInfo *)0x0);
    puVar8 = &UNK_?;
    if (VVar7.y < 3.7148228e-29) {
      iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      iVar6 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      puVar8 = (undefined *)((float)iVar1 - (float)iVar6 * _UNK_?);
    }
  }
  else {
    UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    screenPoint.x = (float)&UNK_?;
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    puVar8 = (undefined *)((float)iVar1 * _UNK_?);
  }
  this_00 = (this->fields).rectTransform;
  if ((this_00 != (RectTransform *)0x0) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0), this_01 != (Transform *)0x0)) {
    value.y = (float)puVar8;
    value.x = fVar3;
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
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Void SetOwnership(PlanetOwnershipType) */

void Assembly-CSharp.dll::LocationIndicator::LocationIndicator_SetOwnership
               (LocationIndicator *this,PlanetOwnershipType__Enum ownershipType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
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
  bVar2 = false;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)();
    return;
  }
  uVar3 = func_?();
  pcVar4 = (char *)((ulonglong)uVar3 >> 0x20);
  if (!bVar2) {
    pcVar4 = (char *)((int)uVar3 + -0x3fefc3a2);
    *pcVar4 = *pcVar4 + (char)unaff_EBX;
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *pcVar4 = *pcVar4 + (char)((uint)this_00 >> 8);
  pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     (this_00,(MethodInfo *)&stack0x00000000);
  if (pTVar6 != (Transform *)0x0) {
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                       ((Vector3 *)&stack0xffffffe0,pTVar6,(MethodInfo *)0x0);
    fVar8 = _UNK_? / pVVar7->x;
    if (((pTRam0000001c != (Text *)0x0) &&
        (iVar9 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_fontSize
                           (pTRam0000001c,(MethodInfo *)0x0), pTRam0000001c != (Text *)0x0)) &&
       (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTRam0000001c,(MethodInfo *)0x0),
       pTVar6 != (Transform *)0x0)) {
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                         ((Vector3 *)&stack0xffffffe0,pTVar6,(MethodInfo *)0x0);
      fVar10 = _UNK_? / pVVar7->x;
      if (((pTRam00000020 != (Text *)0x0) &&
          (iVar11 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_fontSize
                             (pTRam00000020,(MethodInfo *)0x0), pTRam00000020 != (Text *)0x0)) &&
         (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pTRam00000020,(MethodInfo *)0x0),
         pTVar6 != (Transform *)0x0)) {
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                           ((Vector3 *)&stack0xffffffe0,pTVar6,(MethodInfo *)0x0);
        fVar12 = _UNK_? / pVVar7->x;
        iVar13 = func_?();
        if (((piRam_? != (int *)0x0) &&
            (iVar14 = (**(code **)(*piRam_? + 0x310))(), iVar14 != 0)) && (iVar13 != 0)) {
          if (*(int *)(iVar13 + 0xc) == 0) goto code_?;
          *(float *)(iVar13 + 0x10) =
               (float)unaff_EBX * _UNK_? * fVar8 * (float)*(int *)(iVar14 + 8);
          if ((pTRam0000001c != (Text *)0x0) &&
             (iVar14 = (*(code *)(pTRam0000001c->klass->vtable).get_text.method)(), iVar14 != 0)) {
            if (*(uint *)(iVar13 + 0xc) < 2) goto code_?;
            *(float *)(iVar13 + 0x14) =
                 (float)iVar9 * _UNK_? * fVar10 * (float)*(int *)(iVar14 + 8);
            if ((pTRam00000020 != (Text *)0x0) &&
               (iVar14 = (*(code *)(pTRam00000020->klass->vtable).get_text.method)(), iVar14 != 0))
            {
              if (*(uint *)(iVar13 + 0xc) < 3) goto code_?;
              *(float *)(iVar13 + 0x18) =
                   (float)iVar11 * _UNK_? * fVar12 * (float)*(int *)(iVar14 + 8);
              pTVar6 = pTRam00000014;
              uVar15 = *(uint *)(iVar13 + 0xc);
              if (uVar15 == 0) {
                this = (LocationIndicator *)0x0;
              }
              else {
                pLVar16 = *(LocationIndicator **)(iVar13 + 0x10);
                uVar17 = 1;
                this = pLVar16;
                if (1 < (int)uVar15) {
                  pfVar18 = (float *)(iVar13 + 0x14);
                  do {
                    if (uVar15 <= uVar17) goto code_?;
                    pLVar19 = (LocationIndicator *)*pfVar18;
                    if ((float)pLVar16 < (float)pLVar19) {
                      pLVar16 = pLVar19;
                      this = pLVar19;
                    }
                    uVar17 = uVar17 + 1;
                    pfVar18 = pfVar18 + 1;
                  } while ((int)uVar17 < (int)uVar15);
                }
              }
              if (pTRam00000014 != (Transform *)0x0) {
                VVar20 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                         RectTransform_get_sizeDelta
                                   ((RectTransform *)pTRam00000014,(MethodInfo *)0x0);
                RStack_21.m_Height = (float)&UNK_?;
                VVar20.y = VVar20.y;
                VVar20.x = (float)this;
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                          ((RectTransform *)pTVar6,VVar20,(MethodInfo *)0x0);
                if (pTRam00000014 != (Transform *)0x0) {
                  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_lossyScale
                                     ((Vector3 *)&stack0xffffffe0,pTRam00000014,(MethodInfo *)0x0);
                  fVar8 = pVVar7->x;
                  if (pTRam00000030 != (Transform *)0x0) {
                    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                             Transform_get_lossyScale
                                       ((Vector3 *)&stack0xffffffe0,pTRam00000030,(MethodInfo *)0x0)
                    ;
                    fVar10 = pVVar7->x;
                    if (pTRam00000030 != (Transform *)0x0) {
                      pRVar22 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                RectTransform_get_rect
                                          (&RStack_21,(RectTransform *)pTRam00000030,
                                           (MethodInfo *)0x0);
                      fVar10 = pRVar22->m_Width * fVar10;
                      fRam00000034 = (float)&stack0xffffffe0 * fVar8;
                      if (fRam00000034 <= fVar10) {
                        fRam00000034 = fVar10;
                      }
                      if (pTRam00000030 != (Transform *)0x0) {
                        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                 Transform_get_lossyScale
                                           ((Vector3 *)&stack0xffffffe0,pTRam00000030,
                                            (MethodInfo *)0x0);
                        fVar8 = pVVar7->x;
                        if (pTRam00000030 != (Transform *)0x0) {
                          pRVar22 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                    RectTransform_get_rect
                                              (&RStack_21,(RectTransform *)pTRam00000030,
                                               (MethodInfo *)0x0);
                          fRam00000038 = pRVar22->m_Height * fVar8;
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
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
                           ((Component *)pTVar2,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0);
      pTVar2 = (this->fields).ownershipText;
      if (pTVar2 != (Text *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_fontSize(pTVar2,(MethodInfo *)0x0);
        pTVar2 = (this->fields).ownershipText;
        if ((pTVar2 != (Text *)0x0) &&
           (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pTVar2,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)
           ) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                    ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0);
          pTVar2 = (this->fields).distanceText;
          if (pTVar2 != (Text *)0x0) {
            iVar5 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_fontSize
                              (pTVar2,(MethodInfo *)0x0);
            pTVar6 = (this->fields).distanceText;
            if (pTVar6 != (Text *)0x0) {
              puVar7 = &UNK_?;
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pTVar6,(MethodInfo *)0x0);
              if (pTVar4 != (Transform *)0x0) {
                pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_lossyScale
                                    ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0);
                fVar9 = _UNK_? / pVVar8->x;
                iVar10 = func_?();
                pTVar6 = (this->fields).nameText;
                if (((pTVar6 != (Text *)0x0) &&
                    (iVar11 = (*(code *)(pTVar6->klass->vtable).get_text.method)(), iVar11 != 0)) &&
                   (iVar10 != 0)) {
                  if (*(int *)(iVar10 + 0xc) == 0) goto code_?;
                  *(float *)(iVar10 + 0x10) =
                       (float)iVar3 * _UNK_? * (float)pTVar6 * (float)*(int *)(iVar11 + 8);
                  pTVar6 = (this->fields).ownershipText;
                  if ((pTVar6 != (Text *)0x0) &&
                     (iVar11 = (*(code *)(pTVar6->klass->vtable).get_text.method)(), iVar11 != 0)) {
                    if (*(uint *)(iVar10 + 0xc) < 2) goto code_?;
                    *(float *)(iVar10 + 0x14) =
                         (float)(int)puVar7 * _UNK_? * (float)pTVar2 *
                         (float)*(int *)(iVar11 + 8);
                    pTVar2 = (this->fields).distanceText;
                    if ((pTVar2 != (Text *)0x0) &&
                       (iVar11 = (*(code *)(pTVar2->klass->vtable).get_text.method)(), iVar11 != 0)
                       ) {
                      if (*(uint *)(iVar10 + 0xc) < 3) goto code_?;
                      *(float *)(iVar10 + 0x18) =
                           (float)iVar5 * _UNK_? * fVar9 * (float)*(int *)(iVar11 + 8);
                      uVar12 = *(uint *)(iVar10 + 0xc);
                      if (uVar12 == 0) {
                        this = (LocationIndicator *)0x0;
                      }
                      else {
                        pLVar13 = *(LocationIndicator **)(iVar10 + 0x10);
                        uVar14 = 1;
                        this = pLVar13;
                        if (1 < (int)uVar12) {
                          pfVar15 = (float *)(iVar10 + 0x14);
                          do {
                            if (uVar12 <= uVar14) goto code_?;
                            pLVar16 = (LocationIndicator *)*pfVar15;
                            if ((float)pLVar13 < (float)pLVar16) {
                              pLVar13 = pLVar16;
                              this = pLVar16;
                            }
                            uVar14 = uVar14 + 1;
                            pfVar15 = pfVar15 + 1;
                          } while ((int)uVar14 < (int)uVar12);
                        }
                      }
                      pRVar17 = (pLVar1->fields).textRectTransform;
                      if (pRVar17 != (RectTransform *)0x0) {
                        VVar18 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                 RectTransform_get_sizeDelta(pRVar17,(MethodInfo *)0x0);
                        VVar18.y = VVar18.y;
                        VVar18.x = (float)this;
                        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_set_sizeDelta(pRVar17,VVar18,(MethodInfo *)0x0);
                        pTVar4 = (Transform *)(pLVar1->fields).textRectTransform;
                        if (pTVar4 != (Transform *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_lossyScale
                                    ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0);
                          pTVar4 = (Transform *)(pLVar1->fields).rectTransform;
                          if (pTVar4 != (Transform *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_lossyScale
                                      ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0);
                            pRVar17 = (pLVar1->fields).rectTransform;
                            if (pRVar17 != (RectTransform *)0x0) {
                              fVar19 = 0.0;
                              pRVar20 = (Rect *)&stack0xffffffd0;
                              pRVar21 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                        RectTransform_get_rect(pRVar20,pRVar17,(MethodInfo *)0x0);
                              fVar22 = pRVar21->m_Width * (float)pRVar20;
                              fVar9 = (float)this * fVar19;
                              if ((float)this * fVar19 <= fVar22) {
                                fVar9 = fVar22;
                              }
                              pTVar4 = (Transform *)(pLVar1->fields).rectTransform;
                              (pLVar1->fields).width = fVar9;
                              if (pTVar4 != (Transform *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_lossyScale
                                          ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0);
                                pRVar17 = (pLVar1->fields).rectTransform;
                                if (pRVar17 != (RectTransform *)0x0) {
                                  pRVar20 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                            RectTransform_get_rect
                                                      ((Rect *)&stack0xffffffd0,pRVar17,
                                                       (MethodInfo *)0x0);
                                  (pLVar1->fields).height = pRVar20->m_Height * (float)pRVar17;
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
  cVar1 = (char)((uint)unaff_EBP >> 0x18);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LocationIndicator);
    cRam_? = '\x01';
  }
  if ((this->fields).player == (MVPlayer *)0x0) {
    return;
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  this_00 = (this->fields).player;
  if ((this_00 != (MVPlayer *)0x0) &&
     (id = MVPlayer::MVPlayer_get_WoId(this_00,(MethodInfo *)0x0),
     this_01 != (MVWorldObjectClientManager *)0x0)) {
    pMVar2 = (MVWorldObjectClient *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_01,id,(MethodInfo *)0x0);
    (this->fields).avatar = pMVar2;
    func_?(&(this->fields).avatar,pMVar2);
    if ((this->fields).avatar == (MVWorldObjectClient *)0x0) {
      return;
    }
    pMVar2 = (this->fields).avatar;
    pMVar3 = pMVar2->klass;
    cVar4 = (*(code *)(pMVar3->vtable).get_IsTransformDefined.method)
                      (pMVar2,(pMVar3->vtable).get_WorldRotation_1.methodPtr);
    if (cVar4 == '\0') {
      return;
    }
    pMVar2 = (this->fields).avatar;
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      iVar5 = (*(code *)(pMVar2->klass->vtable).get_WorldPosition_1.method)
                         (&stack0xffffffcc,pMVar2,
                          (pMVar2->klass->vtable).set_WorldPosition.methodPtr);
      fVar6 = *(float *)(iVar5 + 8);
      if ((TypeInfo__LocationIndicator->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__LocationIndicator);
      }
      fVar7 = (TypeInfo__LocationIndicator->static_fields->AvatarPosOffset).z;
      fVar6 = fVar7 + fVar6;
      pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (((pMVar8 != (MainCameraManager *)0x0) &&
          (pCVar9 = (pMVar8->fields).mainCamera, pCVar9 != (Camera *)0x0)) &&
         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar9,(MethodInfo *)0x0), this_02 != (Transform *)0x0))
      {
        pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffbc,this_02,(MethodInfo *)0x0);
        uVar11 = pVVar10->x;
        fVar12 = pVVar10->y;
        fVar13 = pVVar10->z;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Math,fVar6);
          cRam_? = '\x01';
        }
        fVar6 = fVar7 - (float)uVar11;
        fVar12 = in_stack_14 - fVar12;
        fVar13 = in_stack_15 - fVar13;
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        if (fVar12 * fVar12 + fVar6 * fVar6 + fVar13 * fVar13 < 0.0) {
          func_?();
        }
        pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if ((pMVar8 != (MainCameraManager *)0x0) &&
           (pCVar9 = (pMVar8->fields).mainCamera, pCVar9 != (Camera *)0x0)) {
          position.y = in_stack_15;
          position.x = in_stack_14;
          position.z = in_stack_16;
          pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                              ((Vector3 *)&stack0xfffffff4,pCVar9,position,(MethodInfo *)0x0);
          fVar6 = pVVar10->z;
          uVar17._0_4_ = pVVar10->x;
          uVar17._4_4_ = pVVar10->y;
          fVar12 = fVar6 / fVar7;
          if (fVar6 / fVar7 < 0.0) {
            pVVar10 = LocationIndicator_FlipScreenPoint
                                ((Vector3 *)&stack0x0000000c,this,*pVVar10,(MethodInfo *)0x0);
            uVar17._0_4_ = pVVar10->x;
            uVar17._4_4_ = pVVar10->y;
            fVar6 = pVVar10->z;
            cVar1 = (char)((uint)(undefined4)uVar17 >> 0x18);
            fVar12 = (float)in_stack_18;
          }
          if ((float)((uint)fVar12 & _UNK_?) < _UNK_?) {
            screenPoint_01.z = fVar6;
            screenPoint_01.x = (float)(int)uVar17;
            screenPoint_01.y = (float)(int)((ulonglong)uVar17 >> 0x20);
            pVVar10 = LocationIndicator_CompensateSideTargetAccuracy
                                ((Vector3 *)&stack0x00000024,this,screenPoint_01,fVar12,
                                 (MethodInfo *)0x0);
            uVar17._0_4_ = pVVar10->x;
            uVar17._4_4_ = pVVar10->y;
            fVar6 = pVVar10->z;
            in_stack_19 = (float)(undefined4)uVar17;
            in_stack_20 = (float)uVar17._4_4_;
          }
          screenPoint_02.z = fVar6;
          screenPoint_02.x = (float)(int)uVar17;
          screenPoint_02.y = (float)(int)((ulonglong)uVar17 >> 0x20);
          bVar21 = LocationIndicator_SetIndicatorPosition(this,screenPoint_02,(MethodInfo *)0x0);
          if ((bVar21 == 0) && (cVar1 == '\0')) {
            LocationIndicator_SetVisibility(this,0,(MethodInfo *)0x0);
            return;
          }
          LocationIndicator_SetVisibility(this,1,(MethodInfo *)0x0);
          LocationIndicator_SetDistanceText(this,in_stack_19,(MethodInfo *)0x0);
          LocationIndicator_SetTextRectSize(this,(MethodInfo *)0x0);
          screenPoint.z = fVar6;
          screenPoint.x = (float)uStack22;
          screenPoint.y = (float)uStack23;
          LocationIndicator_SetAlignments(this,screenPoint,(MethodInfo *)0x0);
          in_stack_18 = this;
          in_stack_19 = (float)((ulonglong)_uStack00000044 >> 0x20);
          screenPoint_00.z = fVar6;
          screenPoint_00.x = (float)uStack24;
          screenPoint_00.y = (float)uStack25;
          in_stack_20 = fVar6;
          LocationIndicator_SetArrowVisibilityAndRotation(this,screenPoint_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
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
  fVar3 = (float)iVar2 * _UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  fVar4 = (this->fields).width;
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  fVar4 = fVar4 * _UNK_?;
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  VVar6.y = ((float)iVar2 - (float)iVar5 * _UNK_?) - (this->fields).height;
  VVar6.x = (float)iVar1 - (fVar4 + fVar3);
  return VVar6;
}


/* Vector2 get_Min() */

Vector2 Assembly-CSharp.dll::LocationIndicator::LocationIndicator_get_Min
                  (LocationIndicator *this,MethodInfo *method)

{
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  fVar2 = (float)iVar1 * _UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  fVar3 = (this->fields).width;
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  VVar4.y = (float)iVar1 * _UNK_?;
  VVar4.x = fVar3 * _UNK_? + fVar2;
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

