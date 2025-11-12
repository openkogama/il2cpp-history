
/* Void Down() */

void Assembly-CSharp.dll::SetDrawPlaneAltitude::SetDrawPlaneAltitude_Down
               (SetDrawPlaneAltitude *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DrawPlane);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 == (DrawPlaneControllerUUI *)0x0) ||
     (this_00 = (pDVar1->fields).worldEditorDrawPlane, this_00 == (WorldEditorDrawPlane *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  if (_UNK_? < fVar4 - (this_00->fields).lastMovePlaneDelta) {
    pVVar5 = WorldEditorDrawPlane::WorldEditorDrawPlane_get_Pos
                       ((Vector3 *)auStack_6,this_00,(MethodInfo *)0x0);
    VStack_7.x = pVVar5->x;
    VStack_7.y = pVVar5->y;
    fVar4 = pVVar5->z;
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    ((Component *)this_00,(MethodInfo *)0x0);
    if (obj == (Transform *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_6._0_4_ = 0.0;
    auStack_6._4_4_ = 0.0;
    stack0xffffffffffffff40 = 0;
    pvVar8 = (obj->fields)._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar8,auStack_6);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar9 = (float)auStack_6._8_4_ + (float)auStack_6._8_4_;
    fVar10 = (float)auStack_6._4_4_ + (float)auStack_6._4_4_;
    fVar11 = (float)auStack_6._0_4_ * ((float)auStack_6._0_4_ + (float)auStack_6._0_4_);
    pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar3._0_4_ = (pVVar12->upVector).x;
    uVar3._4_4_ = (pVVar12->upVector).y;
    fVar13 = fStack_14 * ((float)auStack_6._0_4_ + (float)auStack_6._0_4_);
    fVar15 = (pVVar12->upVector).z;
    VStack_7.z = (((float)auStack_6._0_4_ * fVar9 - fStack_14 * fVar10) * (float)uVar3 +
                   (fVar13 + (float)auStack_6._4_4_ * fVar9) * uVar3._4_4_ +
                  (_UNK_? - ((float)auStack_6._4_4_ * fVar10 + fVar11)) * fVar15) * -1.0 +
                  fVar4;
    VStack_7.y = ((_UNK_? - ((float)auStack_6._8_4_ * fVar9 + fVar11)) * uVar3._4_4_ +
                   (fStack_14 * fVar9 + (float)auStack_6._0_4_ * fVar10) * (float)uVar3 +
                  ((float)auStack_6._4_4_ * fVar9 - fVar13) * fVar15) * -1.0 + VStack_7.y;
    VStack_7.x = ((_UNK_? -
                   ((float)auStack_6._8_4_ * fVar9 + (float)auStack_6._4_4_ * fVar10)) *
                   (float)uVar3 +
                   ((float)auStack_6._0_4_ * fVar10 - fStack_14 * fVar9) * uVar3._4_4_ +
                  (fStack_14 * fVar10 + (float)auStack_6._0_4_ * fVar9) * fVar15) * -1.0 +
                  VStack_7.x;
    auStack_6._0_8_ = uVar3;
    WorldEditorDrawPlane::WorldEditorDrawPlane_set_Pos(this_00,&VStack_7,(MethodInfo *)0x0);
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcRam_?)();
    (this_00->fields).lastMovePlaneDelta = fVar4;
  }
  return;
}


/* Void Up() */

void Assembly-CSharp.dll::SetDrawPlaneAltitude::SetDrawPlaneAltitude_Up
               (SetDrawPlaneAltitude *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DrawPlane);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 == (DrawPlaneControllerUUI *)0x0) ||
     (this_00 = (pDVar1->fields).worldEditorDrawPlane, this_00 == (WorldEditorDrawPlane *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  if (_UNK_? < fVar4 - (this_00->fields).lastMovePlaneDelta) {
    pVVar5 = WorldEditorDrawPlane::WorldEditorDrawPlane_get_Pos
                       ((Vector3 *)auStack_6,this_00,(MethodInfo *)0x0);
    VStack_7.x = pVVar5->x;
    VStack_7.y = pVVar5->y;
    fVar4 = pVVar5->z;
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    ((Component *)this_00,(MethodInfo *)0x0);
    if (obj == (Transform *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_6._0_4_ = 0.0;
    auStack_6._4_4_ = 0.0;
    stack0xffffffffffffff40 = 0;
    pvVar8 = (obj->fields)._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar8,auStack_6);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar9 = (float)auStack_6._8_4_ + (float)auStack_6._8_4_;
    fVar10 = (float)auStack_6._4_4_ + (float)auStack_6._4_4_;
    fVar11 = (float)auStack_6._0_4_ * ((float)auStack_6._0_4_ + (float)auStack_6._0_4_);
    pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar3._0_4_ = (pVVar12->upVector).x;
    uVar3._4_4_ = (pVVar12->upVector).y;
    fVar13 = fStack_14 * ((float)auStack_6._0_4_ + (float)auStack_6._0_4_);
    fVar15 = (pVVar12->upVector).z;
    VStack_7.z = (((float)auStack_6._0_4_ * fVar9 - fStack_14 * fVar10) * (float)uVar3 +
                   (fVar13 + (float)auStack_6._4_4_ * fVar9) * uVar3._4_4_ +
                  (_UNK_? - ((float)auStack_6._4_4_ * fVar10 + fVar11)) * fVar15) * 1.0 +
                  fVar4;
    VStack_7.y = ((_UNK_? - ((float)auStack_6._8_4_ * fVar9 + fVar11)) * uVar3._4_4_ +
                   (fStack_14 * fVar9 + (float)auStack_6._0_4_ * fVar10) * (float)uVar3 +
                  ((float)auStack_6._4_4_ * fVar9 - fVar13) * fVar15) * 1.0 + VStack_7.y;
    VStack_7.x = ((_UNK_? -
                   ((float)auStack_6._8_4_ * fVar9 + (float)auStack_6._4_4_ * fVar10)) *
                   (float)uVar3 +
                   ((float)auStack_6._0_4_ * fVar10 - fStack_14 * fVar9) * uVar3._4_4_ +
                  (fStack_14 * fVar10 + (float)auStack_6._0_4_ * fVar9) * fVar15) * 1.0 +
                  VStack_7.x;
    auStack_6._0_8_ = uVar3;
    WorldEditorDrawPlane::WorldEditorDrawPlane_set_Pos(this_00,&VStack_7,(MethodInfo *)0x0);
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcRam_?)();
    (this_00->fields).lastMovePlaneDelta = fVar4;
  }
  return;
}

