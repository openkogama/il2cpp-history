
/* Void Awake() */

void Assembly-CSharp.dll::LocationIndicator::LocationIndicator_Awake
               (LocationIndicator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (RectTransform *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                     );
  bVar2 = iRam_? != 0;
  (this->fields).rectTransform = pRVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).rectTransform >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Vector3 CompensateSideTargetAccuracy(Vector3, Single) */

Vector3 * Assembly-CSharp.dll::LocationIndicator::LocationIndicator_CompensateSideTargetAccuracy
                    (Vector3 *__return_storage_ptr__,LocationIndicator *this,Vector3 *screenPoint,
                    float sideMeasurement,MethodInfo *method)

{
  fVar1 = screenPoint->y;
  fVar2 = screenPoint->z;
  bVar3 = true;
  fVar4 = screenPoint->x;
  fVar5 = screenPoint->x;
  __return_storage_ptr__->x = screenPoint->x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  if (0.0 < fVar5 || fVar4 == 0.0) {
    fVar4 = screenPoint->x;
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      pVVar8 = (Vector3 *)(*pcVar6)();
      return pVVar8;
    }
    pcRam_? = pcVar6;
    iVar9 = (*pcRam_?)();
    bVar10 = (float)iVar9 < fVar4;
  }
  else {
    bVar10 = true;
  }
  if (0.0 < screenPoint->y || screenPoint->y == 0.0) {
    fVar4 = screenPoint->y;
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      pVVar8 = (Vector3 *)(*pcVar6)();
      return pVVar8;
    }
    pcRam_? = pcVar6;
    iVar9 = (*pcRam_?)();
    bVar3 = (float)iVar9 < fVar4;
  }
  uVar11 = (uint)_UNK_?;
  fVar4 = (_UNK_? - (float)((uint)sideMeasurement & uVar11)) / _UNK_?;
  if ((!bVar10) ||
     ((bVar3 && ((float)((uint)screenPoint->x & uVar11) <= (float)((uint)screenPoint->y & uVar11))))
     ) {
    if (bVar3) {
      fVar5 = __return_storage_ptr__->x;
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        pVVar8 = (Vector3 *)(*pcVar6)();
        return pVVar8;
      }
      pcRam_? = pcVar6;
      iVar9 = (*pcRam_?)();
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_SmoothStep
                         (fVar5,(float)(iVar9 / 2),fVar4,in_R9);
      __return_storage_ptr__->x = fVar4;
    }
  }
  else {
    fVar5 = __return_storage_ptr__->y;
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      pVVar8 = (Vector3 *)(*pcVar6)();
      return pVVar8;
    }
    pcRam_? = pcVar6;
    iVar9 = (*pcRam_?)();
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (_UNK_? < fVar4) {
      fVar4 = _UNK_?;
    }
    __return_storage_ptr__->y = ((float)(iVar9 / 2) - fVar5) * fVar4 + fVar5;
  }
  return __return_storage_ptr__;
}


/* Vector3 FlipScreenPoint(Vector3) */

Vector3 * Assembly-CSharp.dll::LocationIndicator::LocationIndicator_FlipScreenPoint
                    (Vector3 *__return_storage_ptr__,LocationIndicator *this,Vector3 *screenPoint,
                    MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar1)();
    return pVVar3;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar1)();
    return pVVar3;
  }
  pcRam_? = pcVar1;
  iVar5 = (*pcRam_?)();
  uVar6 = screenPoint->x;
  uVar7 = screenPoint->y;
  fVar8 = (float)iVar5 - (float)uVar7;
  fVar9 = (float)iVar4 - (float)uVar6;
  fVar10 = screenPoint->z;
  fVar11 = fVar9 - (float)iVar4 * _UNK_?;
  fVar12 = fVar8 - (float)iVar5 * _UNK_?;
  uStack_13 = 0;
  uStack_14 = CONCAT44(fVar12,fVar11);
  fVar15 = (float)FUN_?(&uStack_14);
  if (_UNK_? < fVar15) {
    fVar11 = fVar11 / fVar15;
    fVar12 = fVar12 / fVar15;
    fVar15 = 0.0 / fVar15;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar11 = (pVVar16->zeroVector).x;
    fVar12 = (pVVar16->zeroVector).y;
    fVar15 = (pVVar16->zeroVector).z;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar1)();
    return pVVar3;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar1)();
    return pVVar3;
  }
  pcRam_? = pcVar1;
  iVar5 = (*pcRam_?)();
  if (iVar5 < iVar4) {
    iVar5 = iVar4;
  }
  fVar17 = (float)iVar5;
  __return_storage_ptr__->x = fVar17 * fVar11 + fVar9;
  __return_storage_ptr__->y = fVar17 * fVar12 + fVar8;
  __return_storage_ptr__->z = fVar17 * fVar15 + (0.0 - fVar10);
  return __return_storage_ptr__;
}


/* Vector3 GetAvatarScreenPoint(Vector3, Single) */

Vector3 * Assembly-CSharp.dll::LocationIndicator::LocationIndicator_GetAvatarScreenPoint
                    (Vector3 *__return_storage_ptr__,LocationIndicator *this,Vector3 *avatarPos,
                    float distance,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 == (MainCameraManager *)0x0) ||
     (obj = (pMVar1->fields).mainCamera, obj == (Camera *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar2)();
    return pVVar3;
  }
  aVStack_4[0].x = avatarPos->x;
  aVStack_4[0].y = avatarPos->y;
  aVStack_4[0].z = avatarPos->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_5.x = 0.0;
  VStack_5.y = 0.0;
  VStack_5.z = 0.0;
  pvVar6 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar2)();
    return pVVar3;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar2 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar2)();
    return pVVar3;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar6,aVStack_4,2);
  __return_storage_ptr__->x = VStack_5.x;
  __return_storage_ptr__->y = VStack_5.y;
  __return_storage_ptr__->z = VStack_5.z;
  fVar8 = __return_storage_ptr__->z / distance;
  if (fVar8 < 0.0) {
    aVStack_4[0].x = VStack_5.x;
    aVStack_4[0].y = VStack_5.y;
    aVStack_4[0].z = VStack_5.z;
    pVVar3 = LocationIndicator_FlipScreenPoint(&VStack_5,this,aVStack_4,(MethodInfo *)0x0);
    fVar9 = pVVar3->y;
    fVar10 = pVVar3->z;
    __return_storage_ptr__->x = pVVar3->x;
    __return_storage_ptr__->y = fVar9;
    __return_storage_ptr__->z = fVar10;
  }
  if ((float)((uint)fVar8 & _UNK_?) < _UNK_?) {
    aVStack_4[0].x = __return_storage_ptr__->x;
    aVStack_4[0].y = __return_storage_ptr__->y;
    aVStack_4[0].z = __return_storage_ptr__->z;
    pVVar3 = LocationIndicator_CompensateSideTargetAccuracy
                       (&VStack_5,this,aVStack_4,fVar8,(MethodInfo *)0x0);
    fVar10 = pVVar3->y;
    fVar8 = pVVar3->z;
    __return_storage_ptr__->x = pVVar3->x;
    __return_storage_ptr__->y = fVar10;
    __return_storage_ptr__->z = fVar8;
  }
  return __return_storage_ptr__;
}


/* Void Initialize(MVPlayer) */

void Assembly-CSharp.dll::LocationIndicator::LocationIndicator_Initialize
               (LocationIndicator *this,MVPlayer *player,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).player = player;
  pMVar2 = (MVPlayer__Class *)this;
  pMVar3 = player;
  if (bVar1) {
    uVar4 = (uint)((ulonglong)&(this->fields).player >> 0xc);
    method = (MethodInfo *)(ulonglong)(uVar4 & 0x3f);
    pMVar3 = (MVPlayer *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      pMVar5 = pMVar3->klass;
      pMVar2 = (MVPlayer__Class *)((ulonglong)pMVar5 | 1L << (longlong)method);
      LOCK();
      bVar1 = pMVar5 == pMVar3->klass;
      if (bVar1) {
        pMVar3->klass = pMVar2;
      }
      UNLOCK();
    } while (!bVar1);
  }
  if ((player != (MVPlayer *)0x0) &&
     (pMVar3 = (MVPlayer *)(player->fields)._UserProfileData_k__BackingField,
     pMVar3 != (MVPlayer *)0x0)) {
    pTVar6 = (this->fields).nameText;
    pMVar2 = (MVPlayer__Class *)0x0;
    if (pTVar6 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pTVar6->klass->vtable).set_text.methodPtr)
                (pTVar6,(pMVar3->fields).playerPlanetDataRemote,
                 (pTVar6->klass->vtable).set_text.method);
      return;
    }
  }
  FUN_?(pMVar2,pMVar3,method);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetAlignments(Vector3) */

void Assembly-CSharp.dll::LocationIndicator::LocationIndicator_SetAlignments
               (LocationIndicator *this,Vector3 *screenPoint,MethodInfo *method)

{
  VVar1 = LocationIndicator_get_Padding(this,(MethodInfo *)0x0);
  fVar2 = (this->fields).width;
  LocationIndicator_get_Padding(this,(MethodInfo *)0x0);
  fVar3 = _UNK_?;
  fVar4 = _UNK_?;
  fStackX_8 = VVar1.x;
  fStackX_8 = fVar2 * _UNK_? + fStackX_8;
  if (screenPoint->x <= fStackX_8 && fStackX_8 != screenPoint->x) {
    pRVar5 = (this->fields).rectTransform;
    if (pRVar5 == (RectTransform *)0x0) goto code_?;
    VVar1 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
                      (pRVar5,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
              (pRVar5,(Vector2)((ulonglong)VVar1 & 0xffffffff00000000),(MethodInfo *)0x0);
    pRVar5 = (this->fields).rectTransform;
    if (pRVar5 == (RectTransform *)0x0) goto code_?;
    VVar1 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
                      (pRVar5,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
              (pRVar5,(Vector2)((ulonglong)VVar1 & 0xffffffff00000000),(MethodInfo *)0x0);
    pRVar5 = (this->fields).rectTransform;
    if (pRVar5 == (RectTransform *)0x0) goto code_?;
    VVar1 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                      (pRVar5,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
              (pRVar5,(Vector2)((ulonglong)VVar1 & 0xffffffff00000000),(MethodInfo *)0x0);
    pRVar5 = (this->fields).textRectTransform;
    if (pRVar5 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
              (pRVar5,(Vector2)((ulonglong)(uint)fVar4 << 0x20),(MethodInfo *)0x0);
    pRVar5 = (this->fields).textRectTransform;
    if (pRVar5 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
              (pRVar5,(Vector2)((ulonglong)(uint)fVar4 << 0x20),(MethodInfo *)0x0);
    pRVar5 = (this->fields).textRectTransform;
    if (pRVar5 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
              (pRVar5,(Vector2)((ulonglong)(uint)fVar4 << 0x20),(MethodInfo *)0x0);
    pLVar6 = (this->fields).layoutGroup;
    if (pLVar6 == (LayoutGroup *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void_MethodInfo__UnityEngine__UI__LayoutGroup__SetProperty<UnityEngine::TextAnchor>_UnityEngine__TextAnchor___UnityEngine__TextAnchor_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    UnityEngine.UI.dll::UnityEngine::UI::LayoutGroup::LayoutGroup_SetProperty_2
              (pLVar6,(Int32Enum__Enum *)&(pLVar6->fields).m_ChildAlignment,3,
               void_MethodInfo__UnityEngine__UI__LayoutGroup__SetProperty<UnityEngine::TextAnchor>_UnityEngine__TextAnchor___UnityEngine__TextAnchor_
              );
    pTVar7 = (this->fields).nameText;
    if ((pTVar7 == (Text *)0x0) || (pFVar8 = (pTVar7->fields).m_FontData, pFVar8 == (FontData *)0x0)
       ) goto code_?;
    if ((pFVar8->fields).m_Alignment != 6) {
      (pFVar8->fields).m_Alignment = 6;
      (*(pTVar7->klass->vtable).SetVerticesDirty.methodPtr)
                (pTVar7,(pTVar7->klass->vtable).SetVerticesDirty.method);
      (*(pTVar7->klass->vtable).SetLayoutDirty.methodPtr)(pTVar7);
    }
    pTVar7 = (this->fields).ownershipText;
    if ((pTVar7 == (Text *)0x0) || (pFVar8 = (pTVar7->fields).m_FontData, pFVar8 == (FontData *)0x0)
       ) goto code_?;
    if ((pFVar8->fields).m_Alignment != 3) {
      (pFVar8->fields).m_Alignment = 3;
      (*(pTVar7->klass->vtable).SetVerticesDirty.methodPtr)
                (pTVar7,(pTVar7->klass->vtable).SetVerticesDirty.method);
      (*(pTVar7->klass->vtable).SetLayoutDirty.methodPtr)(pTVar7);
    }
    pTVar7 = (this->fields).distanceText;
    if ((pTVar7 == (Text *)0x0) || (pFVar8 = (pTVar7->fields).m_FontData, pFVar8 == (FontData *)0x0)
       ) goto code_?;
    if ((pFVar8->fields).m_Alignment != 0) {
      (pFVar8->fields).m_Alignment = 0;
code_?:
      (*(pTVar7->klass->vtable).SetVerticesDirty.methodPtr)
                (pTVar7,(pTVar7->klass->vtable).SetVerticesDirty.method);
      (*(pTVar7->klass->vtable).SetLayoutDirty.methodPtr)(pTVar7);
    }
  }
  else {
    VVar1 = LocationIndicator_get_Max(this,(MethodInfo *)0x0);
    pRVar5 = (this->fields).rectTransform;
    fStackX_8 = VVar1.x;
    if (fStackX_8 < screenPoint->x) {
      if (pRVar5 == (RectTransform *)0x0) goto code_?;
      VVar1 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
                        (pRVar5,(MethodInfo *)0x0);
      fStackX_c = VVar1.y;
      VVar1.y = fStackX_c;
      VVar1.x = fVar3;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                (pRVar5,VVar1,(MethodInfo *)0x0);
      pRVar5 = (this->fields).rectTransform;
      if (pRVar5 == (RectTransform *)0x0) goto code_?;
      VVar1 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
                        (pRVar5,(MethodInfo *)0x0);
      fStackX_c = VVar1.y;
      value_08.y = fStackX_c;
      value_08.x = fVar3;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                (pRVar5,value_08,(MethodInfo *)0x0);
      pRVar5 = (this->fields).rectTransform;
      if (pRVar5 == (RectTransform *)0x0) goto code_?;
      VVar1 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                        (pRVar5,(MethodInfo *)0x0);
      fStackX_c = VVar1.y;
      value_09.y = fStackX_c;
      value_09.x = fVar3;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                (pRVar5,value_09,(MethodInfo *)0x0);
      pRVar5 = (this->fields).textRectTransform;
      if (pRVar5 == (RectTransform *)0x0) goto code_?;
      value_10.y = fVar4;
      value_10.x = fVar3;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                (pRVar5,value_10,(MethodInfo *)0x0);
      pRVar5 = (this->fields).textRectTransform;
      if (pRVar5 == (RectTransform *)0x0) goto code_?;
      value_11.y = fVar4;
      value_11.x = fVar3;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                (pRVar5,value_11,(MethodInfo *)0x0);
      pRVar5 = (this->fields).textRectTransform;
      if (pRVar5 == (RectTransform *)0x0) goto code_?;
      value_12.y = fVar4;
      value_12.x = fVar3;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                (pRVar5,value_12,(MethodInfo *)0x0);
      pLVar6 = (this->fields).layoutGroup;
      if (pLVar6 == (LayoutGroup *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void_MethodInfo__UnityEngine__UI__LayoutGroup__SetProperty<UnityEngine::TextAnchor>_UnityEngine__TextAnchor___UnityEngine__TextAnchor_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      UnityEngine.UI.dll::UnityEngine::UI::LayoutGroup::LayoutGroup_SetProperty_2
                (pLVar6,(Int32Enum__Enum *)&(pLVar6->fields).m_ChildAlignment,5,
                 void_MethodInfo__UnityEngine__UI__LayoutGroup__SetProperty<UnityEngine::TextAnchor>_UnityEngine__TextAnchor___UnityEngine__TextAnchor_
                );
      pTVar7 = (this->fields).nameText;
      if ((pTVar7 == (Text *)0x0) ||
         (pFVar8 = (pTVar7->fields).m_FontData, pFVar8 == (FontData *)0x0))
      goto code_?;
      if ((pFVar8->fields).m_Alignment != 8) {
        (pFVar8->fields).m_Alignment = 8;
        (*(pTVar7->klass->vtable).SetVerticesDirty.methodPtr)
                  (pTVar7,(pTVar7->klass->vtable).SetVerticesDirty.method);
        (*(pTVar7->klass->vtable).SetLayoutDirty.methodPtr)(pTVar7);
      }
      pTVar7 = (this->fields).ownershipText;
      if ((pTVar7 == (Text *)0x0) ||
         (pFVar8 = (pTVar7->fields).m_FontData, pFVar8 == (FontData *)0x0))
      goto code_?;
      if ((pFVar8->fields).m_Alignment != 5) {
        (pFVar8->fields).m_Alignment = 5;
        (*(pTVar7->klass->vtable).SetVerticesDirty.methodPtr)
                  (pTVar7,(pTVar7->klass->vtable).SetVerticesDirty.method);
        (*(pTVar7->klass->vtable).SetLayoutDirty.methodPtr)(pTVar7);
      }
      pTVar7 = (this->fields).distanceText;
      if ((pTVar7 == (Text *)0x0) ||
         (pFVar8 = (pTVar7->fields).m_FontData, pFVar8 == (FontData *)0x0))
      goto code_?;
      if ((pFVar8->fields).m_Alignment != 2) {
        (pFVar8->fields).m_Alignment = 2;
        goto code_?;
      }
    }
    else {
      if (pRVar5 == (RectTransform *)0x0) goto code_?;
      VVar1 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
                        (pRVar5,(MethodInfo *)0x0);
      fStackX_c = VVar1.y;
      value.y = fStackX_c;
      value.x = fVar4;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                (pRVar5,value,(MethodInfo *)0x0);
      pRVar5 = (this->fields).rectTransform;
      if (pRVar5 == (RectTransform *)0x0) goto code_?;
      VVar1 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
                        (pRVar5,(MethodInfo *)0x0);
      fStackX_c = VVar1.y;
      value_00.y = fStackX_c;
      value_00.x = fVar4;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                (pRVar5,value_00,(MethodInfo *)0x0);
      pRVar5 = (this->fields).rectTransform;
      if (pRVar5 == (RectTransform *)0x0) goto code_?;
      VVar1 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                        (pRVar5,(MethodInfo *)0x0);
      fStackX_c = VVar1.y;
      value_01.y = fStackX_c;
      value_01.x = fVar4;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                (pRVar5,value_01,(MethodInfo *)0x0);
      pRVar5 = (this->fields).textRectTransform;
      if (pRVar5 == (RectTransform *)0x0) goto code_?;
      value_02.y = fVar4;
      value_02.x = fVar4;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
                (pRVar5,value_02,(MethodInfo *)0x0);
      pRVar5 = (this->fields).textRectTransform;
      if (pRVar5 == (RectTransform *)0x0) goto code_?;
      value_03.y = fVar4;
      value_03.x = fVar4;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                (pRVar5,value_03,(MethodInfo *)0x0);
      pRVar5 = (this->fields).textRectTransform;
      if (pRVar5 == (RectTransform *)0x0) goto code_?;
      value_04.y = fVar4;
      value_04.x = fVar4;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                (pRVar5,value_04,(MethodInfo *)0x0);
      pLVar6 = (this->fields).layoutGroup;
      if (pLVar6 == (LayoutGroup *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void_MethodInfo__UnityEngine__UI__LayoutGroup__SetProperty<UnityEngine::TextAnchor>_UnityEngine__TextAnchor___UnityEngine__TextAnchor_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      UnityEngine.UI.dll::UnityEngine::UI::LayoutGroup::LayoutGroup_SetProperty_2
                (pLVar6,(Int32Enum__Enum *)&(pLVar6->fields).m_ChildAlignment,4,
                 void_MethodInfo__UnityEngine__UI__LayoutGroup__SetProperty<UnityEngine::TextAnchor>_UnityEngine__TextAnchor___UnityEngine__TextAnchor_
                );
      pTVar7 = (this->fields).nameText;
      if ((pTVar7 == (Text *)0x0) ||
         (pFVar8 = (pTVar7->fields).m_FontData, pFVar8 == (FontData *)0x0))
      goto code_?;
      if ((pFVar8->fields).m_Alignment != 7) {
        (pFVar8->fields).m_Alignment = 7;
        (*(pTVar7->klass->vtable).SetVerticesDirty.methodPtr)
                  (pTVar7,(pTVar7->klass->vtable).SetVerticesDirty.method);
        (*(pTVar7->klass->vtable).SetLayoutDirty.methodPtr)
                  (pTVar7,(pTVar7->klass->vtable).SetLayoutDirty.method);
      }
      pTVar7 = (this->fields).ownershipText;
      if ((pTVar7 == (Text *)0x0) ||
         (pFVar8 = (pTVar7->fields).m_FontData, pFVar8 == (FontData *)0x0))
      goto code_?;
      if ((pFVar8->fields).m_Alignment != 4) {
        (pFVar8->fields).m_Alignment = 4;
        (*(pTVar7->klass->vtable).SetVerticesDirty.methodPtr)
                  (pTVar7,(pTVar7->klass->vtable).SetVerticesDirty.method);
        (*(pTVar7->klass->vtable).SetLayoutDirty.methodPtr)
                  (pTVar7,(pTVar7->klass->vtable).SetLayoutDirty.method);
      }
      pTVar7 = (this->fields).distanceText;
      if ((pTVar7 == (Text *)0x0) ||
         (pFVar8 = (pTVar7->fields).m_FontData, pFVar8 == (FontData *)0x0))
      goto code_?;
      if ((pFVar8->fields).m_Alignment != 1) {
        (pFVar8->fields).m_Alignment = 1;
        (*(pTVar7->klass->vtable).SetVerticesDirty.methodPtr)
                  (pTVar7,(pTVar7->klass->vtable).SetVerticesDirty.method);
        (*(pTVar7->klass->vtable).SetLayoutDirty.methodPtr)
                  (pTVar7,(pTVar7->klass->vtable).SetLayoutDirty.method);
      }
      aVStack_9[0].x = screenPoint->x;
      aVStack_9[0].y = screenPoint->y;
      aVStack_9[0].z = screenPoint->z;
      LocationIndicator_SetIndicatorPosition(this,aVStack_9,(MethodInfo *)0x0);
    }
  }
  VVar1 = LocationIndicator_get_Max(this,(MethodInfo *)0x0);
  pRVar5 = (this->fields).rectTransform;
  fStackX_c = VVar1.y;
  if (fStackX_c < screenPoint->y) {
    if (pRVar5 == (RectTransform *)0x0) goto code_?;
    VVar1 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
                      (pRVar5,(MethodInfo *)0x0);
    fStackX_8 = VVar1.x;
    value_06.y = fVar3;
    value_06.x = fStackX_8;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
              (pRVar5,value_06,(MethodInfo *)0x0);
    pRVar5 = (this->fields).rectTransform;
    if (pRVar5 == (RectTransform *)0x0) goto code_?;
    VVar1 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
                      (pRVar5,(MethodInfo *)0x0);
    fStackX_8 = VVar1.x;
    value_07.y = fVar3;
    value_07.x = fStackX_8;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
              (pRVar5,value_07,(MethodInfo *)0x0);
    pRVar5 = (this->fields).rectTransform;
    if (pRVar5 == (RectTransform *)0x0) goto code_?;
    VVar1 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                      (pRVar5,(MethodInfo *)0x0);
    fStackX_8 = VVar1.x;
  }
  else {
    if (pRVar5 == (RectTransform *)0x0) goto code_?;
    VVar1 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
                      (pRVar5,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMin
              (pRVar5,(Vector2)((ulonglong)VVar1 & 0xffffffff),(MethodInfo *)0x0);
    pRVar5 = (this->fields).rectTransform;
    if (pRVar5 == (RectTransform *)0x0) goto code_?;
    VVar1 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
                      (pRVar5,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
              (pRVar5,(Vector2)((ulonglong)VVar1 & 0xffffffff),(MethodInfo *)0x0);
    pRVar5 = (this->fields).rectTransform;
    if (pRVar5 == (RectTransform *)0x0) goto code_?;
    VVar1 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                      (pRVar5,(MethodInfo *)0x0);
    fStackX_8 = VVar1.x;
    fVar3 = 0.0;
  }
  value_05.y = fVar3;
  value_05.x = fStackX_8;
  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
            (pRVar5,value_05,(MethodInfo *)0x0);
  pRVar5 = (this->fields).textRectTransform;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_10[0]._0_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
  auStack_10[0]._4_4_ = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
  if (pRVar5 != (RectTransform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                    ,auStack_10[0],0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pRVar5 == (RectTransform *)0x0) {
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pvVar12 = (pRVar5->fields)._._._.m_CachedPtr;
    if (pvVar12 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar5,(MethodInfo *)0x0);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pcVar11 = pcRam_?;
    if (pcRam_? == (code *)0x0) {
      pcVar11 = (code *)FUN_?(&UNK_?);
      if (pcVar11 == (code *)0x0) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(pvVar12,auStack_10);
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetArrowVisibilityAndRotation(Vector3) */

void Assembly-CSharp.dll::LocationIndicator::LocationIndicator_SetArrowVisibilityAndRotation
               (LocationIndicator *this,Vector3 *screenPoint,MethodInfo *method)

{
  VVar1 = LocationIndicator_get_Padding(this,(MethodInfo *)0x0);
  fVar2 = (this->fields).width;
  LocationIndicator_get_Padding(this,(MethodInfo *)0x0);
  fStackX_8 = VVar1.x;
  fStackX_8 = fVar2 * _UNK_? + fStackX_8;
  if (fStackX_8 < screenPoint->x || fStackX_8 == screenPoint->x) {
    VVar1 = LocationIndicator_get_Max(this,(MethodInfo *)0x0);
    fStackX_8 = VVar1.x;
    if (screenPoint->x <= fStackX_8) {
      VVar1 = LocationIndicator_get_Min(this,(MethodInfo *)0x0);
      fStackX_c = VVar1.y;
      if (fStackX_c < screenPoint->y || fStackX_c == screenPoint->y) {
        VVar1 = LocationIndicator_get_Max(this,(MethodInfo *)0x0);
        fStackX_c = VVar1.y;
        if (screenPoint->y <= fStackX_c) {
          pRVar3 = (this->fields).arrow;
          if ((pRVar3 != (RectTransform *)0x0) &&
             (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pRVar3,(MethodInfo *)0x0),
             this_00 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_00,0,(MethodInfo *)0x0);
            return;
          }
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  iVar6 = (*pcRam_?)();
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  uVar7 = screenPoint->x;
  uVar8 = screenPoint->y;
  fVar9 = (float)uVar7 - (float)(iVar6 / 2);
  iVar6 = (*pcRam_?)();
  fVar10 = screenPoint->z - 0.0;
  fVar11 = (float)uVar8 - (float)(iVar6 / 2);
  uStack_12 = CONCAT44(fVar11,fVar9);
  fStack_13 = fVar10;
  fVar2 = (float)FUN_?(&uStack_12);
  if (_UNK_? < fVar2) {
    fStack_13 = fVar10 / fVar2;
    uStack_12 = CONCAT44(fVar11 / fVar2,fVar9 / fVar2);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_12._0_4_ = (pVVar14->zeroVector).x;
    uStack_12._4_4_ = (pVVar14->zeroVector).y;
    fStack_13 = (pVVar14->zeroVector).z;
  }
  pRVar3 = (this->fields).arrow;
  fVar2 = (float)func_?();
  fStack_13 = ((fVar2 * _UNK_?) / _UNK_?) * _UNK_?;
  auStack_15 = ZEXT416(0);
  uStack_12 = 0;
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)(&uStack_12);
  if (pRVar3 == (RectTransform *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_16 = auStack_15._0_8_;
  uStack_17 = auStack_15._8_8_;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar18 = (pRVar3->fields)._._._.m_CachedPtr;
  if (pvVar18 != (void *)0x0) {
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar18,&uStack_16);
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar3,(MethodInfo *)0x0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetDistanceText(Single) */

void Assembly-CSharp.dll::LocationIndicator::LocationIndicator_SetDistanceText
               (LocationIndicator *this,float distance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__m);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_10[0] = func_?(distance);
  arg0 = (Object *)FUN_?(uRam_?,auStackX_10);
  pSVar1 = StringLiteral__0_;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_2,arg0,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  this_00 = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this_00,(MethodInfo *)0x0);
  if (pSVar1 != (String *)0x0) {
    iVar4 = (pSVar1->fields)._stringLength / 3;
    if (0 < iVar4) {
      iVar5 = (pSVar1->fields)._stringLength;
      iVar5 = iVar5 + (iVar5 / 3 + (iVar5 >> 0x1f) +
                      (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f)
                      ) * -3;
      if (0 < iVar5) {
        pSVar6 = mscorlib.dll::System::String::String_Substring_1(pSVar1,0,iVar5,(MethodInfo *)0x0);
        if (this_00 == (StringBuilder *)0x0) goto code_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (this_00,pSVar6,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (this_00,::StringLiteral__,(MethodInfo *)0x0);
        pSVar1 = mscorlib.dll::System::String::String_Remove(pSVar1,0,iVar5,(MethodInfo *)0x0);
      }
    }
    iVar5 = 0;
    iVar4 = iVar4 + -1;
    if (iVar4 < 1) {
      if (this_00 == (StringBuilder *)0x0) goto code_?;
    }
    else {
      do {
        if (pSVar1 == (String *)0x0) goto code_?;
        if ((pSVar1->fields)._stringLength < 0) {
          uVar7 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
          pAVar8 = (ArgumentOutOfRangeException *)func_?(uVar7);
          pSVar1 = (String *)func_?(&StringLiteral_startIndex_cannot_be_larger_than);
          pSVar6 = (String *)func_?(&StringLiteral_startIndex);
          mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                    (pAVar8,pSVar6,pSVar1,(MethodInfo *)0x0);
          uVar7 = func_?(&MethodInfo__System__String__Substring_int__int_);
          FUN_?(pAVar8,uVar7);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar10 = (pSVar1->fields)._stringLength;
        if (iVar10 + -3 < 0) {
          uVar7 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
          pAVar8 = (ArgumentOutOfRangeException *)func_?(uVar7);
          pSVar1 = (String *)func_?(&StringLiteral_Index_and_length_must_refer_to_a);
          pSVar6 = (String *)func_?(&StringLiteral_length);
          mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                    (pAVar8,pSVar6,pSVar1,(MethodInfo *)0x0);
          uVar7 = func_?(&MethodInfo__System__String__Substring_int__int_);
          FUN_?(pAVar8,uVar7);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pSVar6 = pSVar1;
        if (iVar10 != 3) {
          pSVar6 = mscorlib.dll::System::String::String_InternalSubString
                             (pSVar1,0,3,(MethodInfo *)0x0);
        }
        if (this_00 == (StringBuilder *)0x0) goto code_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (this_00,pSVar6,(MethodInfo *)0x0);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (this_00,::StringLiteral__,(MethodInfo *)0x0);
        pSVar1 = mscorlib.dll::System::String::String_Remove(pSVar1,0,3,(MethodInfo *)0x0);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
              (this_00,pSVar1,(MethodInfo *)0x0);
    pSVar1 = StringLiteral__0__m;
    pTVar11 = (this->fields).distanceText;
    PStack_2._arg0 = (Object *)0x0;
    PStack_2._arg1 = (Object *)0x0;
    PStack_2._arg2 = (Object *)0x0;
    PStack_2._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor
              (&PStack_2,(Object *)this_00,(MethodInfo *)0x0);
    PStack_3._arg0 = PStack_2._arg0;
    PStack_3._arg1 = PStack_2._arg1;
    PStack_3._arg2 = PStack_2._arg2;
    PStack_3._args = PStack_2._args;
    pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
    if (pTVar11 != (Text *)0x0) {
      (*(pTVar11->klass->vtable).set_text.methodPtr)
                (pTVar11,pSVar1,(pTVar11->klass->vtable).set_text.method);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean SetIndicatorPosition(Vector3) */

bool Assembly-CSharp.dll::LocationIndicator::LocationIndicator_SetIndicatorPosition
               (LocationIndicator *this,Vector3 *screenPoint,MethodInfo *method)

{
  fVar1 = screenPoint->z;
  uVar2._0_4_ = screenPoint->x;
  uVar2._4_4_ = screenPoint->y;
  VVar3 = LocationIndicator_get_Padding(this,(MethodInfo *)0x0);
  fVar4 = (this->fields).width;
  LocationIndicator_get_Padding(this,(MethodInfo *)0x0);
  fStackX_8 = VVar3.x;
  uStack_5 = uVar2;
  if (fVar4 * _UNK_? + fStackX_8 <= (float)(undefined4)uVar2) {
    VVar3 = LocationIndicator_get_Max(this,(MethodInfo *)0x0);
    fStackX_8 = VVar3.x;
    if (fStackX_8 < (float)(undefined4)uVar2) {
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        bVar8 = (*pcVar6)();
        return bVar8;
      }
      pcRam_? = pcVar6;
      iVar9 = (*pcRam_?)();
      VVar3 = LocationIndicator_get_Padding(this,(MethodInfo *)0x0);
      fStackX_8 = VVar3.x;
      uVar2 = (ulonglong)(uint)((float)iVar9 - fStackX_8);
    }
  }
  else {
    VVar3 = LocationIndicator_get_Padding(this,(MethodInfo *)0x0);
    uVar2 = (ulonglong)VVar3 & 0xffffffff;
  }
  LocationIndicator_get_Padding(this,(MethodInfo *)0x0);
  VVar3 = LocationIndicator_get_Padding(this,(MethodInfo *)0x0);
  fVar4 = uStack_5._4_4_;
  fStackX_c = VVar3.y;
  if (fStackX_c <= uStack_5._4_4_) {
    VVar3 = LocationIndicator_get_Max(this,(MethodInfo *)0x0);
    fStackX_c = VVar3.y;
    if (fStackX_c < fVar4) {
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        bVar8 = (*pcVar6)();
        return bVar8;
      }
      pcRam_? = pcVar6;
      iVar9 = (*pcRam_?)();
      VVar3 = LocationIndicator_get_Padding(this,(MethodInfo *)0x0);
      fStackX_c = VVar3.y;
      fVar4 = (float)iVar9 - fStackX_c;
    }
  }
  else {
    VVar3 = LocationIndicator_get_Padding(this,(MethodInfo *)0x0);
    fStackX_c = VVar3.y;
    fVar4 = fStackX_c;
  }
  this_00 = (this->fields).rectTransform;
  if ((this_00 == (RectTransform *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    bVar8 = (*pcVar6)();
    return bVar8;
  }
  uStack_5 = CONCAT44(fVar4,(int)uVar2);
  fStack_10 = fVar1;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar11 = (obj->fields)._._.m_CachedPtr;
  if (pvVar11 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    bVar8 = (*pcVar6)();
    return bVar8;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    bVar8 = (*pcVar6)();
    return bVar8;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(pvVar11,&uStack_5);
  if (0.0 < screenPoint->x || screenPoint->x == 0.0) {
    fVar4 = screenPoint->x;
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      bVar8 = (*pcVar6)();
      return bVar8;
    }
    pcRam_? = pcVar6;
    iVar9 = (*pcRam_?)();
    if ((fVar4 <= (float)iVar9) && (0.0 < screenPoint->y || screenPoint->y == 0.0)) {
      iVar12 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      return (float)iVar12 < screenPoint->y;
    }
  }
  return 1;
}


/* Void SetOwnership(PlanetOwnershipType) */

void Assembly-CSharp.dll::LocationIndicator::LocationIndicator_SetOwnership
               (LocationIndicator *this,PlanetOwnershipType__Enum ownershipType,MethodInfo *method)

{
  PVar1 = ownershipType & 0xff;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Editor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Play_Tester);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Owner);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Spectator);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar2 = (this->fields).ownershipText;
  key = StringLiteral_Editor;
  if ((((PVar1 == PlanetOwnershipType__Enum_Editor) ||
       (key = StringLiteral_Owner, PVar1 == PlanetOwnershipType__Enum_Owner)) ||
      (key = StringLiteral_Play_Tester, PVar1 == PlanetOwnershipType__Enum_Playtester)) ||
     ((pSVar3 = ::StringLiteral__, PVar1 != PlanetOwnershipType__Enum_Pending &&
      (key = StringLiteral_Spectator, PVar1 == PlanetOwnershipType__Enum_Spectator)))) {
    pSVar3 = TM::TM__(key,(MethodInfo *)0x0);
  }
  if (pTVar2 == (Text *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pTVar2->klass->vtable).set_text.methodPtr)
            (pTVar2,pSVar3,(pTVar2->klass->vtable).set_text.method);
  return;
}


/* Void SetTextRectSize() */

void Assembly-CSharp.dll::LocationIndicator::LocationIndicator_SetTextRectSize
               (LocationIndicator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).nameText;
  if ((pTVar1 != (Text *)0x0) && (pFVar2 = (pTVar1->fields).m_FontData, pFVar2 != (FontData *)0x0))
  {
    iVar3 = (pFVar2->fields).m_FontSize;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar1,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_5 = 0;
      uStack_6 = 0;
      pvVar7 = (pTVar4->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar7);
      fVar10 = _UNK_?;
      pTVar1 = (this->fields).ownershipText;
      fVar11 = _UNK_? / (float)uStack_5;
      fVar12 = (float)iVar3 * _UNK_?;
      if ((pTVar1 != (Text *)0x0) &&
         (pFVar2 = (pTVar1->fields).m_FontData, pFVar2 != (FontData *)0x0)) {
        iVar3 = (pFVar2->fields).m_FontSize;
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)(this->fields).ownershipText,(MethodInfo *)0x0);
        if (pTVar4 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_5 = 0;
          uStack_6 = 0;
          pvVar7 = (pTVar4->fields)._._.m_CachedPtr;
          if (pvVar7 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcVar8 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
            uVar9 = func_?(&UNK_?);
            FUN_?(uVar9,0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcRam_? = pcVar8;
          (*pcRam_?)(pvVar7);
          pTVar1 = (this->fields).distanceText;
          fVar13 = fVar10 / (float)uStack_5;
          fVar14 = (float)iVar3 * _UNK_?;
          if ((pTVar1 != (Text *)0x0) &&
             (pFVar2 = (pTVar1->fields).m_FontData, pFVar2 != (FontData *)0x0)) {
            iVar3 = (pFVar2->fields).m_FontSize;
            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)(this->fields).distanceText,(MethodInfo *)0x0);
            if (pTVar4 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_5 = 0;
              uStack_6 = 0;
              pvVar7 = (pTVar4->fields)._._.m_CachedPtr;
              if (pvVar7 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pcVar8 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                uVar9 = func_?(&UNK_?);
                FUN_?(uVar9,0);
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pcRam_? = pcVar8;
              (*pcRam_?)(pvVar7,&uStack_5);
              lVar15 = FUN_?(TypeInfo__System__Single,3);
              pTVar1 = (this->fields).nameText;
              if (((pTVar1 != (Text *)0x0) &&
                  (lVar16 = (*(pTVar1->klass->vtable).get_text.methodPtr)
                                      (pTVar1,(pTVar1->klass->vtable).get_text.method), lVar16 != 0)
                  ) && (lVar15 != 0)) {
                if (*(int *)(lVar15 + 0x18) == 0) {
code_?:
                  FUN_?();
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                *(float *)(lVar15 + 0x20) = (float)*(int *)(lVar16 + 0x10) * fVar12 * fVar11;
                pTVar1 = (this->fields).ownershipText;
                if ((pTVar1 != (Text *)0x0) &&
                   (lVar16 = (*(pTVar1->klass->vtable).get_text.methodPtr)
                                       (pTVar1,(pTVar1->klass->vtable).get_text.method), lVar16 != 0
                   )) {
                  if (*(uint *)(lVar15 + 0x18) < 2) goto code_?;
                  *(float *)(lVar15 + 0x24) = (float)*(int *)(lVar16 + 0x10) * fVar14 * fVar13;
                  pTVar1 = (this->fields).distanceText;
                  if ((pTVar1 != (Text *)0x0) &&
                     (lVar16 = (*(pTVar1->klass->vtable).get_text.methodPtr)(), lVar16 != 0)) {
                    if (*(uint *)(lVar15 + 0x18) < 3) goto code_?;
                    *(float *)(lVar15 + 0x28) =
                         (float)iVar3 * _UNK_? * (fVar10 / (float)uStack_5) *
                         (float)*(int *)(lVar16 + 0x10);
                    uVar17 = *(uint *)(lVar15 + 0x18);
                    if (uVar17 == 0) {
                      fVar10 = 0.0;
                    }
                    else {
                      if (*(int *)(lVar15 + 0x18) == 0) goto code_?;
                      fVar10 = *(float *)(lVar15 + 0x20);
                      uVar18 = 1;
                      if (1 < (int)uVar17) {
                        pfVar19 = (float *)(lVar15 + 0x24);
                        lVar15 = 1;
                        do {
                          if (uVar17 <= uVar18) goto code_?;
                          if (fVar10 < *pfVar19) {
                            fVar10 = *pfVar19;
                          }
                          uVar18 = uVar18 + 1;
                          lVar15 = lVar15 + 1;
                          pfVar19 = pfVar19 + 1;
                        } while (lVar15 < (int)uVar17);
                      }
                    }
                    pRVar20 = (this->fields).textRectTransform;
                    if (pRVar20 != (RectTransform *)0x0) {
                      VVar21 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                               RectTransform_get_sizeDelta(pRVar20,(MethodInfo *)0x0);
                      fStackX_c = VVar21.y;
                      VVar21.y = fStackX_c;
                      VVar21.x = fVar10;
                      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                      RectTransform_set_sizeDelta(pRVar20,VVar21,(MethodInfo *)0x0);
                      pRVar20 = (this->fields).textRectTransform;
                      if (pRVar20 != (RectTransform *)0x0) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        uStack_22 = 0;
                        uStack_23 = 0;
                        pvVar7 = (pRVar20->fields)._._._.m_CachedPtr;
                        if (pvVar7 == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)pRVar20,(MethodInfo *)0x0);
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        pcVar8 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0))
                        {
                          uVar9 = func_?(&UNK_?);
                          FUN_?(uVar9,0);
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        pcRam_? = pcVar8;
                        (*pcRam_?)(pvVar7);
                        pRVar20 = (this->fields).rectTransform;
                        if (pRVar20 != (RectTransform *)0x0) {
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          uStack_5 = 0;
                          uStack_6 = 0;
                          pvVar7 = (pRVar20->fields)._._._.m_CachedPtr;
                          if (pvVar7 == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)pRVar20,(MethodInfo *)0x0);
                            pcVar8 = (code *)swi(3);
                            (*pcVar8)();
                            return;
                          }
                          pcVar8 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)
                             ) {
                            uVar9 = func_?(&UNK_?);
                            FUN_?(uVar9,0);
                            pcVar8 = (code *)swi(3);
                            (*pcVar8)();
                            return;
                          }
                          pcRam_? = pcVar8;
                          (*pcRam_?)(pvVar7);
                          pRVar20 = (this->fields).rectTransform;
                          if (pRVar20 != (RectTransform *)0x0) {
                            if (cRam_? == '\0') {
                              FUN_?(&
                                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            uStack_24 = 0;
                            uStack_25 = 0;
                            pvVar7 = (pRVar20->fields)._._._.m_CachedPtr;
                            if (pvVar7 == (void *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                              ThrowHelper_2_ThrowNullReferenceException
                                        ((Object *)pRVar20,(MethodInfo *)0x0);
                              pcVar8 = (code *)swi(3);
                              (*pcVar8)();
                              return;
                            }
                            pcVar8 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar8 = (code *)FUN_?(&UNK_?),
                               pcVar8 == (code *)0x0)) {
                              uVar9 = func_?(&UNK_?);
                              FUN_?(uVar9,0);
                              pcVar8 = (code *)swi(3);
                              (*pcVar8)();
                              return;
                            }
                            pcRam_? = pcVar8;
                            (*pcRam_?)(pvVar7);
                            fVar11 = (float)uStack_22 * fVar10;
                            if ((float)uStack_22 * fVar10 <= (float)uStack_25 * (float)uStack_5) {
                              fVar11 = (float)uStack_25 * (float)uStack_5;
                            }
                            pRVar20 = (this->fields).rectTransform;
                            (this->fields).width = fVar11;
                            if (pRVar20 != (RectTransform *)0x0) {
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              uStack_22 = 0;
                              uStack_23 = 0;
                              pvVar7 = (pRVar20->fields)._._._.m_CachedPtr;
                              if (pvVar7 == (void *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                ThrowHelper_2_ThrowNullReferenceException
                                          ((Object *)pRVar20,(MethodInfo *)0x0);
                                pcVar8 = (code *)swi(3);
                                (*pcVar8)();
                                return;
                              }
                              pcVar8 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) &&
                                 (pcVar8 = (code *)FUN_?(&UNK_?),
                                 pcVar8 == (code *)0x0)) {
                                uVar9 = func_?(&UNK_?);
                                FUN_?(uVar9,0);
                                pcVar8 = (code *)swi(3);
                                (*pcVar8)();
                                return;
                              }
                              pcRam_? = pcVar8;
                              (*pcRam_?)(pvVar7);
                              pRVar20 = (this->fields).rectTransform;
                              if (pRVar20 != (RectTransform *)0x0) {
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                uStack_24 = 0;
                                uStack_25 = 0;
                                pvVar7 = (pRVar20->fields)._._._.m_CachedPtr;
                                if (pvVar7 == (void *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            ((Object *)pRVar20,(MethodInfo *)0x0);
                                  pcVar8 = (code *)swi(3);
                                  (*pcVar8)();
                                  return;
                                }
                                pcVar8 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar8 = (code *)FUN_?(&UNK_?),
                                   pcVar8 == (code *)0x0)) {
                                  uVar9 = func_?(&UNK_?);
                                  FUN_?(uVar9,0);
                                  pcVar8 = (code *)swi(3);
                                  (*pcVar8)();
                                  return;
                                }
                                pcRam_? = pcVar8;
                                (*pcRam_?)(pvVar7,&uStack_24);
                                (this->fields).height = uStack_25._4_4_ * (float)uStack_22;
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
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetVisibility(Boolean) */

void Assembly-CSharp.dll::LocationIndicator::LocationIndicator_SetVisibility
               (LocationIndicator *this,bool isVisible,MethodInfo *method)

{
  pRVar1 = (this->fields).arrow;
  if ((pRVar1 != (RectTransform *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,isVisible,(MethodInfo *)0x0);
    pRVar1 = (this->fields).textRectTransform;
    if ((pRVar1 != (RectTransform *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,isVisible,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar2 == (GameObject *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar4 = (pGVar2->fields)._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar4,isVisible);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::LocationIndicator::LocationIndicator_Update
               (LocationIndicator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).player == (MVPlayer *)0x0) {
    return;
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pMVar1 = (this->fields).player;
  if ((((pMVar1 != (MVPlayer *)0x0) &&
       (pSVar2 = (pMVar1->fields).spawnRolesManager, pSVar2 != (SpawnRolesManager *)0x0)) &&
      (pSVar3 = (pSVar2->fields).spawnRolesRuntimeData, pSVar3 != (SpawnRolesRuntimeData *)0x0)) &&
     (this_00 != (MVWorldObjectClientManager *)0x0)) {
    pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (this_00,(pSVar3->fields).activeSpawnRole,(MethodInfo *)0x0);
    bVar5 = iRam_? != 0;
    (this->fields).avatar = pMVar4;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(this->fields).avatar >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    if ((this->fields).avatar == (MVWorldObjectClient *)0x0) {
      return;
    }
    pMVar4 = (this->fields).avatar;
    pMVar10 = pMVar4->klass;
    cVar11 = (*(pMVar10->vtable).get_IsTransformDefined.methodPtr)
                       (pMVar4,(pMVar10->vtable).get_IsTransformDefined.method);
    if (cVar11 == '\0') {
      return;
    }
    pMVar4 = (this->fields).avatar;
    if (pMVar4 != (MVWorldObjectClient *)0x0) {
      puVar12 = (undefined8 *)
                (*(pMVar4->klass->vtable).get_WorldPosition_1.methodPtr)
                          (aVStack_13,pMVar4,(pMVar4->klass->vtable).get_WorldPosition_1.method);
      VStack_14._0_8_ = *puVar12;
      fVar15 = *(float *)(puVar12 + 1);
      if (*(int *)&(TypeInfo__LocationIndicator->_1).field_0x1c == 0) {
        FUN_?();
      }
      pLVar16 = TypeInfo__LocationIndicator->static_fields;
      aVStack_13[0].x = (pLVar16->AvatarPosOffset).x;
      aVStack_13[0].y = (pLVar16->AvatarPosOffset).y;
      fVar15 = fVar15 + (pLVar16->AvatarPosOffset).z;
      fVar17 = VStack_14.x + aVStack_13[0].x;
      fVar18 = VStack_14.y + aVStack_13[0].y;
      pMVar19 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (((pMVar19 != (MainCameraManager *)0x0) &&
          (pCVar20 = (pMVar19->fields).mainCamera, pCVar20 != (Camera *)0x0)) &&
         (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pCVar20,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_14.x = 0.0;
        VStack_14.y = 0.0;
        VStack_14.z = 0.0;
        pvVar21 = (obj->fields)._._.m_CachedPtr;
        if (pvVar21 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
        pcVar22 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar22 = (code *)FUN_?(&UNK_?), pcVar22 == (code *)0x0)) {
          uVar23 = func_?(&UNK_?);
          FUN_?(uVar23,0);
          pcVar22 = (code *)swi(3);
          (*pcVar22)();
          return;
        }
        pcRam_? = pcVar22;
        (*pcRam_?)(pvVar21,&VStack_14);
        aVStack_13[0].x = VStack_14.x;
        aVStack_13[0].y = VStack_14.y;
        VStack_14.y = fVar18;
        VStack_14.x = fVar17;
        aVStack_13[0].z = VStack_14.z;
        VStack_14.z = fVar15;
        distance = (float)FUN_?();
        bVar5 = distance < _UNK_?;
        pMVar19 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if ((pMVar19 != (MainCameraManager *)0x0) &&
           (pCVar20 = (pMVar19->fields).mainCamera, pCVar20 != (Camera *)0x0)) {
          aVStack_13[0].y = fVar18;
          aVStack_13[0].x = fVar17;
          aVStack_13[0].z = fVar15;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          VStack_14.x = 0.0;
          VStack_14.y = 0.0;
          VStack_14.z = 0.0;
          pvVar21 = (pCVar20->fields)._._._.m_CachedPtr;
          if (pvVar21 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar20,(MethodInfo *)0x0);
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          pcVar22 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar22 = (code *)FUN_?(&UNK_?), pcVar22 == (code *)0x0)) {
            uVar23 = func_?(&UNK_?);
            FUN_?(uVar23,0);
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          pcRam_? = pcVar22;
          (*pcRam_?)(pvVar21,aVStack_13);
          fVar15 = VStack_14.x;
          fVar17 = VStack_14.y;
          sideMeasurement = VStack_14.z / distance;
          fVar18 = VStack_14.z;
          if (sideMeasurement < 0.0) {
            aVStack_13[0].x = VStack_14.x;
            aVStack_13[0].y = VStack_14.y;
            aVStack_13[0].z = VStack_14.z;
            pVVar24 = LocationIndicator_FlipScreenPoint
                                (&VStack_14,this,aVStack_13,(MethodInfo *)0x0);
            uVar25 = pVVar24->x;
            uVar26 = pVVar24->y;
            fVar18 = pVVar24->z;
            fVar15 = (float)uVar25;
            fVar17 = (float)uVar26;
          }
          if ((float)((uint)sideMeasurement & _UNK_?) < _UNK_?) {
            aVStack_13[0].y = fVar17;
            aVStack_13[0].x = fVar15;
            aVStack_13[0].z = fVar18;
            pVVar24 = LocationIndicator_CompensateSideTargetAccuracy
                                (&VStack_14,this,aVStack_13,sideMeasurement,(MethodInfo *)0x0);
            fVar15 = pVVar24->x;
            fVar17 = pVVar24->y;
            fVar18 = pVVar24->z;
          }
          aVStack_13[0].y = fVar17;
          aVStack_13[0].x = fVar15;
          aVStack_13[0].z = fVar18;
          bVar27 = LocationIndicator_SetIndicatorPosition(this,aVStack_13,(MethodInfo *)0x0);
          if ((bVar27 == 0) && (bVar5)) {
            LocationIndicator_SetVisibility(this,0,(MethodInfo *)0x0);
            return;
          }
          LocationIndicator_SetVisibility(this,1,(MethodInfo *)0x0);
          LocationIndicator_SetDistanceText(this,distance,(MethodInfo *)0x0);
          LocationIndicator_SetTextRectSize(this,(MethodInfo *)0x0);
          aVStack_13[0].z = fVar18;
          LocationIndicator_SetAlignments(this,aVStack_13,(MethodInfo *)0x0);
          aVStack_13[0].z = fVar18;
          LocationIndicator_SetArrowVisibilityAndRotation(this,aVStack_13,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* LocationIndicator() */

void Assembly-CSharp.dll::LocationIndicator::LocationIndicator__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LocationIndicator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->upVector).x;
  fVar3 = (pVVar1->upVector).y * _UNK_?;
  fVar4 = (pVVar1->upVector).z * _UNK_?;
  pLVar5 = TypeInfo__LocationIndicator->static_fields;
  (pLVar5->AvatarPosOffset).x = (float)uVar2 * _UNK_?;
  (pLVar5->AvatarPosOffset).y = fVar3;
  (pLVar5->AvatarPosOffset).z = fVar4;
  return;
}


/* Vector2 get_Max() */

Vector2 Assembly-CSharp.dll::LocationIndicator::LocationIndicator_get_Max
                  (LocationIndicator *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    VVar3 = (Vector2)(*pcVar1)();
    return VVar3;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  VVar3 = LocationIndicator_get_Padding(this,(MethodInfo *)0x0);
  fVar5 = (this->fields).width;
  LocationIndicator_get_Padding(this,(MethodInfo *)0x0);
  fVar5 = fVar5 * _UNK_?;
  fStackX_18 = VVar3.x;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    VVar3 = (Vector2)(*pcVar1)();
    return VVar3;
  }
  pcRam_? = pcVar1;
  iVar6 = (*pcRam_?)();
  LocationIndicator_get_Padding(this,(MethodInfo *)0x0);
  VVar3 = LocationIndicator_get_Padding(this,(MethodInfo *)0x0);
  fStackX_1c = VVar3.y;
  VVar3.x = (float)iVar4 - (fVar5 + fStackX_18);
  VVar3.y = ((float)iVar6 - fStackX_1c) - (this->fields).height;
  return VVar3;
}


/* Vector2 get_Min() */

Vector2 Assembly-CSharp.dll::LocationIndicator::LocationIndicator_get_Min
                  (LocationIndicator *this,MethodInfo *method)

{
  VVar1 = LocationIndicator_get_Padding(this,(MethodInfo *)0x0);
  fVar2 = (this->fields).width;
  VVar3 = LocationIndicator_get_Padding(this,(MethodInfo *)0x0);
  fStackX_1c = VVar3.y;
  fStackX_8 = VVar1.x;
  VVar1.y = fStackX_1c;
  VVar1.x = fVar2 * _UNK_? + fStackX_8;
  return VVar1;
}


/* Vector2 get_Padding() */

Vector2 Assembly-CSharp.dll::LocationIndicator::LocationIndicator_get_Padding
                  (LocationIndicator *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    VVar3 = (Vector2)(*pcVar1)();
    return VVar3;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    VVar3 = (Vector2)(*pcVar1)();
    return VVar3;
  }
  pcRam_? = pcVar1;
  VVar3.x = (float)iVar4 * _UNK_?;
  iVar4 = (*pcRam_?)();
  VVar3.y = (float)iVar4 * _UNK_?;
  return VVar3;
}

