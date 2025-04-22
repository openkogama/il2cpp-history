
/* Void DrawQuad2D(Vector2, Vector2, Single, Camera) */

void Assembly-CSharp.dll::RTG::GraphicsEx::GraphicsEx_DrawQuad2D
               (Vector2 quadCenter,Vector2 quadSize,float rotationDegrees,Camera *camera,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Graphics);
    func_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    cRam_? = '\x01';
  }
  if (camera != (Camera *)0x0) {
    fStack_1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                          (camera,(MethodInfo *)0x0);
    fStack_1 = fStack_1 + _UNK_?;
    position.z = fStack_1;
    position._0_8_ = quadCenter;
    fStack_2 = fStack_1;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
                       (&VStack_4,camera,position,(MethodInfo *)0x0);
    fVar5 = pVVar3->z;
    QStack_6.x = quadSize.x;
    QStack_6.y = 0.0;
    QStack_6.z = 0.0;
    QStack_6.w = 0.0;
    fStack_1 = fStack_2;
    position_00.y = quadSize.y * _UNK_? + quadCenter.y;
    position_00.x = quadCenter.x - quadSize.x * _UNK_?;
    position_00.z = fStack_2;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
                       (&VStack_4,camera,position_00,(MethodInfo *)0x0);
    uVar7 = pVVar3->x;
    uVar8 = pVVar3->y;
    fVar9 = pVVar3->z;
    fStack_1 = fStack_2;
    position_01.y = quadCenter.y - quadSize.y * _UNK_?;
    position_01.x = QStack_6.x * _UNK_? + quadCenter.x;
    position_01.z = fStack_2;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
                       (&VStack_4,camera,position_01,(MethodInfo *)0x0);
    fVar10 = pVVar3->x;
    fVar11 = pVVar3->y;
    fVar12 = pVVar3->z;
    this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)camera,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    VStack_4.y = fVar11 - (float)uVar8;
    fVar13 = (TypeInfo__UnityEngine__Vector3->static_fields->oneVector).z;
    VStack_4.x = fVar10 - (float)uVar7;
    QStack_6.y = 0.0;
    QStack_6.z = 0.0;
    QStack_6.w = 0.0;
    VStack_4.z = fVar12 - fVar9;
    QStack_6.x = fVar10;
    if (this != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                         (&VStack_14,this,(MethodInfo *)0x0);
      v1.y = VStack_4.y;
      v1.x = VStack_4.x;
      v1.z = VStack_4.z;
      Vector3Ex::Vector3Ex_Dot(v1,*pVVar3,(MethodInfo *)0x0);
      QStack_6.x = QStack_6.x - (float)uVar7;
      fStack_2 = fVar11 - (float)uVar8;
      VStack_4.z = fVar12 - fVar9;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                         (&VStack_14,this,(MethodInfo *)0x0);
      v1_00.y = fStack_2;
      v1_00.x = QStack_6.x;
      v1_00.z = VStack_4.z;
      fStack_2 = Vector3Ex::Vector3Ex_Dot(v1_00,*pVVar3,(MethodInfo *)0x0);
      uVar15 = (uint)fStack_2 & _UNK_?;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (&VStack_14,this,(MethodInfo *)0x0);
      pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                         (&QStack_6,rotationDegrees,*pVVar3,(MethodInfo *)0x0);
      VStack_14.x = pQVar16->x;
      VStack_14.y = pQVar16->y;
      VStack_14.z = pQVar16->z;
      pSStack_17 = (Singleton_1_MeshPool___Class *)pQVar16->w;
      pQVar16 = (Quaternion *)&stack0xffffff88;
      pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         (pQVar16,this,(MethodInfo *)0x0);
      fVar10 = pQVar18->y;
      fVar11 = pQVar18->z;
      VStack_4.y = pQVar18->w;
      QStack_6.x = (float)pSStack_17;
      QStack_6.y = (float)pSStack_17;
      QStack_6.z = (float)pSStack_17;
      QStack_6.w = (float)pSStack_17;
      fStack_2 = (VStack_4.y * VStack_14.x + pQVar18->x * (float)pSStack_17 + fVar11 * VStack_14.y)
                  - fVar10 * VStack_14.z;
      fVar12 = VStack_14.z * fVar11;
      fVar9 = (VStack_14.y * VStack_4.y + fVar10 * (float)pSStack_17 + VStack_14.z * pQVar18->x) -
               fVar11 * VStack_14.x;
      VStack_14.z = (VStack_14.z * VStack_4.y + fVar11 * (float)pSStack_17 + fVar10 * VStack_14.x) -
                    VStack_14.y * pQVar18->x;
      VStack_4.x = VStack_4.y * (float)pSStack_17;
      pSStack_17 = (Singleton_1_MeshPool___Class *)
                   (((VStack_4.x - VStack_14.x * pQVar18->x) - fVar10 * VStack_14.y) - fVar12);
      pos.y = fVar9;
      pos.x = fStack_2;
      pos.z = fVar5;
      q.y = fVar9;
      q.x = fStack_2;
      q.z = VStack_14.z;
      q.w = (float)pSStack_17;
      s.y = (float)uVar15;
      s.x = (float)pQVar16;
      s.z = fVar13;
      VStack_14.x = fStack_2;
      VStack_14.y = fVar9;
      VStack_4.z = VStack_4.y;
      fStack_1 = VStack_4.y;
      pMVar19 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                          ((Matrix4x4 *)&stack0xffffff30,pos,q,s,(MethodInfo *)0x0);
      fVar10 = pMVar19->m00;
      fVar11 = pMVar19->m10;
      fVar5 = pMVar19->m20;
      fVar9 = pMVar19->m30;
      QStack_6.x = pMVar19->m01;
      QStack_6.y = pMVar19->m11;
      QStack_6.z = pMVar19->m21;
      QStack_6.w = pMVar19->m31;
      VStack_14.x = pMVar19->m02;
      VStack_14.y = pMVar19->m12;
      VStack_14.z = pMVar19->m22;
      pSStack_17 = (Singleton_1_MeshPool___Class *)pMVar19->m32;
      VStack_4.x = pMVar19->m03;
      VStack_4.y = pMVar19->m13;
      VStack_4.z = pMVar19->m23;
      fStack_1 = pMVar19->m33;
      if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
        pSStack_17 = TypeInfo__RTG__Singleton<RTG::MeshPool>;
        VStack_14.z = (float)&UNK_?;
        func_?();
      }
      this_00 = (MeshPool *)
                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                          (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
      if (this_00 != (MeshPool *)0x0) {
        mesh = MeshPool::MeshPool_get_UnitQuadXY(this_00,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Graphics);
        }
        matrix.m10 = fVar11;
        matrix.m00 = fVar10;
        matrix.m20 = fVar5;
        matrix.m30 = fVar9;
        matrix.m01 = QStack_6.x;
        matrix.m11 = QStack_6.y;
        matrix.m21 = QStack_6.z;
        matrix.m31 = QStack_6.w;
        matrix.m02 = VStack_14.x;
        matrix.m12 = VStack_14.y;
        matrix.m22 = VStack_14.z;
        matrix.m32 = (float)pSStack_17;
        matrix.m03 = VStack_4.x;
        matrix.m13 = VStack_4.y;
        matrix.m23 = VStack_4.z;
        matrix.m33 = fStack_1;
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                  (mesh,matrix,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void DrawQuadBorder2D(Vector2, Vector2, Single, Camera) */

void Assembly-CSharp.dll::RTG::GraphicsEx::GraphicsEx_DrawQuadBorder2D
               (Vector2 quadCenter,Vector2 quadSize,float rotationDegrees,Camera *camera,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Graphics);
    func_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    cRam_? = '\x01';
  }
  if (camera != (Camera *)0x0) {
    fStack_1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                          (camera,(MethodInfo *)0x0);
    fStack_1 = fStack_1 + _UNK_?;
    position.z = fStack_1;
    position._0_8_ = quadCenter;
    fStack_2 = fStack_1;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
                       (&VStack_4,camera,position,(MethodInfo *)0x0);
    fVar5 = pVVar3->z;
    QStack_6.x = quadSize.x;
    QStack_6.y = 0.0;
    QStack_6.z = 0.0;
    QStack_6.w = 0.0;
    fStack_1 = fStack_2;
    position_00.y = quadSize.y * _UNK_? + quadCenter.y;
    position_00.x = quadCenter.x - quadSize.x * _UNK_?;
    position_00.z = fStack_2;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
                       (&VStack_4,camera,position_00,(MethodInfo *)0x0);
    uVar7 = pVVar3->x;
    uVar8 = pVVar3->y;
    fVar9 = pVVar3->z;
    fStack_1 = fStack_2;
    position_01.y = quadCenter.y - quadSize.y * _UNK_?;
    position_01.x = QStack_6.x * _UNK_? + quadCenter.x;
    position_01.z = fStack_2;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
                       (&VStack_4,camera,position_01,(MethodInfo *)0x0);
    fVar10 = pVVar3->x;
    fVar11 = pVVar3->y;
    fVar12 = pVVar3->z;
    this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)camera,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    VStack_4.y = fVar11 - (float)uVar8;
    fVar13 = (TypeInfo__UnityEngine__Vector3->static_fields->oneVector).z;
    VStack_4.x = fVar10 - (float)uVar7;
    QStack_6.y = 0.0;
    QStack_6.z = 0.0;
    QStack_6.w = 0.0;
    VStack_4.z = fVar12 - fVar9;
    QStack_6.x = fVar10;
    if (this != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                         (&VStack_14,this,(MethodInfo *)0x0);
      v1.y = VStack_4.y;
      v1.x = VStack_4.x;
      v1.z = VStack_4.z;
      Vector3Ex::Vector3Ex_Dot(v1,*pVVar3,(MethodInfo *)0x0);
      QStack_6.x = QStack_6.x - (float)uVar7;
      fStack_2 = fVar11 - (float)uVar8;
      VStack_4.z = fVar12 - fVar9;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                         (&VStack_14,this,(MethodInfo *)0x0);
      v1_00.y = fStack_2;
      v1_00.x = QStack_6.x;
      v1_00.z = VStack_4.z;
      fStack_2 = Vector3Ex::Vector3Ex_Dot(v1_00,*pVVar3,(MethodInfo *)0x0);
      uVar15 = (uint)fStack_2 & _UNK_?;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (&VStack_14,this,(MethodInfo *)0x0);
      pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                         (&QStack_6,rotationDegrees,*pVVar3,(MethodInfo *)0x0);
      VStack_14.x = pQVar16->x;
      VStack_14.y = pQVar16->y;
      VStack_14.z = pQVar16->z;
      pSStack_17 = (Singleton_1_MeshPool___Class *)pQVar16->w;
      pQVar16 = (Quaternion *)&stack0xffffff88;
      pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         (pQVar16,this,(MethodInfo *)0x0);
      fVar10 = pQVar18->y;
      fVar11 = pQVar18->z;
      VStack_4.y = pQVar18->w;
      QStack_6.x = (float)pSStack_17;
      QStack_6.y = (float)pSStack_17;
      QStack_6.z = (float)pSStack_17;
      QStack_6.w = (float)pSStack_17;
      fStack_2 = (VStack_4.y * VStack_14.x + pQVar18->x * (float)pSStack_17 + fVar11 * VStack_14.y)
                  - fVar10 * VStack_14.z;
      fVar12 = VStack_14.z * fVar11;
      fVar9 = (VStack_14.y * VStack_4.y + fVar10 * (float)pSStack_17 + VStack_14.z * pQVar18->x) -
               fVar11 * VStack_14.x;
      VStack_14.z = (VStack_14.z * VStack_4.y + fVar11 * (float)pSStack_17 + fVar10 * VStack_14.x) -
                    VStack_14.y * pQVar18->x;
      VStack_4.x = VStack_4.y * (float)pSStack_17;
      pSStack_17 = (Singleton_1_MeshPool___Class *)
                   (((VStack_4.x - VStack_14.x * pQVar18->x) - fVar10 * VStack_14.y) - fVar12);
      pos.y = fVar9;
      pos.x = fStack_2;
      pos.z = fVar5;
      q.y = fVar9;
      q.x = fStack_2;
      q.z = VStack_14.z;
      q.w = (float)pSStack_17;
      s.y = (float)uVar15;
      s.x = (float)pQVar16;
      s.z = fVar13;
      VStack_14.x = fStack_2;
      VStack_14.y = fVar9;
      VStack_4.z = VStack_4.y;
      fStack_1 = VStack_4.y;
      pMVar19 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                          ((Matrix4x4 *)&stack0xffffff30,pos,q,s,(MethodInfo *)0x0);
      fVar10 = pMVar19->m00;
      fVar11 = pMVar19->m10;
      fVar5 = pMVar19->m20;
      fVar9 = pMVar19->m30;
      QStack_6.x = pMVar19->m01;
      QStack_6.y = pMVar19->m11;
      QStack_6.z = pMVar19->m21;
      QStack_6.w = pMVar19->m31;
      VStack_14.x = pMVar19->m02;
      VStack_14.y = pMVar19->m12;
      VStack_14.z = pMVar19->m22;
      pSStack_17 = (Singleton_1_MeshPool___Class *)pMVar19->m32;
      VStack_4.x = pMVar19->m03;
      VStack_4.y = pMVar19->m13;
      VStack_4.z = pMVar19->m23;
      fStack_1 = pMVar19->m33;
      if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
        pSStack_17 = TypeInfo__RTG__Singleton<RTG::MeshPool>;
        VStack_14.z = (float)&UNK_?;
        func_?();
      }
      this_00 = (MeshPool *)
                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                          (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
      if (this_00 != (MeshPool *)0x0) {
        mesh = MeshPool::MeshPool_get_UnitWireQuadXY(this_00,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Graphics);
        }
        matrix.m10 = fVar11;
        matrix.m00 = fVar10;
        matrix.m20 = fVar5;
        matrix.m30 = fVar9;
        matrix.m01 = QStack_6.x;
        matrix.m11 = QStack_6.y;
        matrix.m21 = QStack_6.z;
        matrix.m31 = QStack_6.w;
        matrix.m02 = VStack_14.x;
        matrix.m12 = VStack_14.y;
        matrix.m22 = VStack_14.z;
        matrix.m32 = (float)pSStack_17;
        matrix.m03 = VStack_4.x;
        matrix.m13 = VStack_4.y;
        matrix.m23 = VStack_4.z;
        matrix.m33 = fStack_1;
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                  (mesh,matrix,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void DrawWireBox(AABB) */

void Assembly-CSharp.dll::RTG::GraphicsEx::GraphicsEx_DrawWireBox(AABB box,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Graphics);
    func_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::MeshPool>);
  }
  this = (MeshPool *)
         Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                   (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (this != (MeshPool *)0x0) {
    mesh = MeshPool::MeshPool_get_UnitWireBox(this,(MethodInfo *)0x0);
    pMVar1 = AABB::AABB_GetUnitBoxTransform((Matrix4x4 *)&stack0xffffff7c,&box,(MethodInfo *)0x0);
    matrix = *pMVar1;
    if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,matrix,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DrawWireBox(OBB) */

void Assembly-CSharp.dll::RTG::GraphicsEx::GraphicsEx_DrawWireBox_1(OBB box,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Graphics);
    func_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::MeshPool>);
  }
  this = (MeshPool *)
         Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                   (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (this != (MeshPool *)0x0) {
    mesh = MeshPool::MeshPool_get_UnitWireBox(this,(MethodInfo *)0x0);
    pMVar1 = OBB::OBB_GetUnitBoxTransform((Matrix4x4 *)&stack0xffffff7c,&box,(MethodInfo *)0x0);
    matrix = *pMVar1;
    if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,matrix,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DrawWireCornerBox(AABB, Single) */

void Assembly-CSharp.dll::RTG::GraphicsEx::GraphicsEx_DrawWireCornerBox
               (AABB box,float wireCornerLinePercentage,MethodInfo *method)

{
  auVar1._28_4_ = wireCornerLinePercentage;
  auVar1._0_28_ = (undefined1  [28])box;
  auVar1._32_4_ = method;
  auVar1._36_20_ = in_stack_2;
  auVar1._56_4_ = 0;
  auVar3 = auVar1 << 0x20;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Graphics);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::MeshPool>);
  }
  this = (MeshPool *)
         Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                   (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (this == (MeshPool *)0x0) goto code_?;
  mesh = MeshPool::MeshPool_get_UnitCoordSystem(this,(MethodInfo *)0x0);
  this_00 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
            AABB::AABB_GetCornerPoints(&box,(MethodInfo *)0x0);
  if (wireCornerLinePercentage < 0.0) {
    fVar4 = 0.0;
code_?:
    wireCornerLinePercentage = fVar4;
  }
  else {
    fVar4 = _UNK_?;
    if (_UNK_? < wireCornerLinePercentage) goto code_?;
  }
  pVVar5 = OBB::OBB_get_Extents((Vector3 *)&VStack_6,(OBB *)&box,(MethodInfo *)0x0);
  uVar7 = pVVar5->x;
  uVar8 = pVVar5->y;
  fVar4 = (float)uVar7 * wireCornerLinePercentage;
  fVar9 = (float)uVar8 * wireCornerLinePercentage;
  fVar10 = pVVar5->z * wireCornerLinePercentage;
  if (this_00 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    fVar11 = fVar4;
    fVar12 = fVar9;
    pVVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        (&VStack_6,this_00,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    pSVar14 = pVVar13->alias;
    pVVar15 = (VisualTreeAsset *)pVVar13->path;
    pVVar16 = pVVar13->asset;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pos_05.y = (float)pVVar15;
    pos_05.x = (float)pSVar14;
    pos_05.z = (float)pVVar16;
    s_05.y = fVar12;
    s_05.x = fVar11;
    s_05.z = fVar10;
    pMVar17 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff64,pos_05,
                         TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,s_05,
                         (MethodInfo *)0x0);
    fVar18 = pMVar17->m00;
    VStack_6.alias = (String *)pMVar17->m10;
    VStack_6.path = (String *)pMVar17->m20;
    VStack_6.asset = (VisualTreeAsset *)pMVar17->m30;
    fStack_19 = pMVar17->m01;
    pSStack_20 = (String *)pMVar17->m11;
    pSVar14 = (String *)pMVar17->m21;
    pVVar15 = (VisualTreeAsset *)pMVar17->m31;
    pGVar21 = (Graphics__Class *)pMVar17->m02;
    fVar11 = pMVar17->m12;
    fVar22 = pMVar17->m22;
    fVar23 = pMVar17->m32;
    fVar24 = pMVar17->m03;
    fVar25 = pMVar17->m13;
    fVar26 = pMVar17->m23;
    puVar27 = (undefined *)pMVar17->m33;
    if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
      puVar27 = &UNK_?;
      pGVar21 = TypeInfo__UnityEngine__Graphics;
      func_?();
    }
    matrix.m10 = (float)VStack_6.alias;
    matrix.m00 = fVar18;
    matrix.m20 = (float)VStack_6.path;
    matrix.m30 = (float)VStack_6.asset;
    matrix.m01 = fStack_19;
    matrix.m11 = (float)pSStack_20;
    matrix.m21 = (float)pSVar14;
    matrix.m31 = (float)pVVar15;
    matrix.m02 = (float)pGVar21;
    matrix.m12 = fVar11;
    matrix.m22 = fVar22;
    matrix.m32 = fVar23;
    matrix.m03 = fVar24;
    matrix.m13 = fVar25;
    matrix.m23 = fVar26;
    matrix.m33 = (float)puVar27;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,matrix,(MethodInfo *)0x0);
    pVVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&pSStack_20,this_00,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    VStack_6.path = pVVar13->alias;
    VStack_6.asset = (VisualTreeAsset *)pVVar13->path;
    pVVar15 = pVVar13->asset;
    fVar4 = fVar4 * _UNK_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    box._size.x = fVar12;
    s_06._0_4_ = fVar4;
    box._size.y = fVar10;
    fVar4 = (TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion).x;
    pVVar28 = VStack_6.asset;
    pos_06.z = (float)pVVar15;
    pos_06.x = (float)VStack_6.path;
    pos_06.y = (float)VStack_6.asset;
    pMVar17 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff64,pos_06,
                         TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                         (Vector3)s_06,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar17,(MethodInfo *)0x0);
    pVVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&pSStack_20,this_00,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    VStack_6.path = pVVar13->alias;
    VStack_6.asset = (VisualTreeAsset *)pVVar13->path;
    pVVar16 = pVVar13->asset;
    fVar11 = fVar9 * _UNK_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pos.z = (float)pVVar16;
    pos.x = (float)VStack_6.path;
    pos.y = (float)VStack_6.asset;
    s.y = fVar11;
    s.x = fVar4;
    s.z = fVar10;
    pMVar17 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff64,pos,
                         TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,s,
                         (MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar17,(MethodInfo *)0x0);
    pVVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&pSStack_20,this_00,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    VStack_6.path = pVVar13->alias;
    VStack_6.asset = (VisualTreeAsset *)pVVar13->path;
    pVVar16 = pVVar13->asset;
    pVVar29 = pVVar15;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pos_00.z = (float)pVVar16;
    pos_00.x = (float)VStack_6.path;
    pos_00.y = (float)VStack_6.asset;
    s_00.y = fVar11;
    s_00.x = (float)pVVar29;
    s_00.z = fVar10;
    pMVar17 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff64,pos_00,
                         TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,s_00,
                         (MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar17,(MethodInfo *)0x0);
    pVVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&pSStack_20,this_00,7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    VStack_6.path = pVVar13->alias;
    VStack_6.asset = (VisualTreeAsset *)pVVar13->path;
    pVVar16 = pVVar13->asset;
    fVar10 = (float)pVVar15 * _UNK_?;
    fVar11 = (float)pVVar28 * _UNK_?;
    fVar4 = fVar9;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pos_01.z = (float)pVVar16;
    pos_01.x = (float)VStack_6.path;
    pos_01.y = (float)VStack_6.asset;
    s_01.y = fVar4;
    s_01.x = fVar10;
    s_01.z = fVar11;
    pMVar17 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff64,pos_01,
                         TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,s_01,
                         (MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar17,(MethodInfo *)0x0);
    pVVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&pSStack_20,this_00,6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    VStack_6.path = pVVar13->alias;
    VStack_6.asset = (VisualTreeAsset *)pVVar13->path;
    pVVar16 = pVVar13->asset;
    pVVar28 = pVVar15;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pos_02.z = (float)pVVar16;
    pos_02.x = (float)VStack_6.path;
    pos_02.y = (float)VStack_6.asset;
    s_02.y = fVar4;
    s_02.x = (float)pVVar28;
    s_02.z = fVar11;
    pMVar17 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff64,pos_02,
                         TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,s_02,
                         (MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar17,(MethodInfo *)0x0);
    pVVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&pSStack_20,this_00,5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    VStack_6.path = pVVar13->alias;
    VStack_6.asset = (VisualTreeAsset *)pVVar13->path;
    pVVar16 = pVVar13->asset;
    fVar9 = fVar9 * _UNK_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pos_03.z = (float)pVVar16;
    pos_03.x = (float)VStack_6.path;
    pos_03.y = (float)VStack_6.asset;
    s_03.y = fVar9;
    s_03.x = (float)pVVar28;
    s_03.z = fVar11;
    pMVar17 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff64,pos_03,
                         TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,s_03,
                         (MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar17,(MethodInfo *)0x0);
    pVVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&pSStack_20,this_00,4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    VStack_6.path = pVVar13->alias;
    VStack_6.asset = (VisualTreeAsset *)pVVar13->path;
    pVVar16 = pVVar13->asset;
    fVar4 = (float)pVVar15 * _UNK_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pos_04.z = (float)pVVar16;
    pos_04.x = (float)VStack_6.path;
    pos_04.y = (float)VStack_6.asset;
    s_04.y = fVar9;
    s_04.x = fVar4;
    s_04.z = fVar11;
    pMVar17 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff64,pos_04,
                         TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,s_04,
                         (MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar17,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* Void DrawWireCornerBox(OBB, Single) */

void Assembly-CSharp.dll::RTG::GraphicsEx::GraphicsEx_DrawWireCornerBox_1
               (OBB box,float wireCornerLinePercentage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Graphics);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::MeshPool>);
  }
  this = (MeshPool *)
         Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                   (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (this == (MeshPool *)0x0) goto code_?;
  mesh_00 = MeshPool::MeshPool_get_UnitCoordSystem(this,(MethodInfo *)0x0);
  this_00 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
            OBB::OBB_GetCornerPoints(&box,(MethodInfo *)0x0);
  if (wireCornerLinePercentage < 0.0) {
    fVar1 = 0.0;
code_?:
    wireCornerLinePercentage = fVar1;
  }
  else {
    fVar1 = _UNK_?;
    if (_UNK_? < wireCornerLinePercentage) goto code_?;
  }
  pVVar2 = OBB::OBB_get_Extents((Vector3 *)&stack0xffffffc8,&box,(MethodInfo *)0x0);
  uVar3 = pVVar2->x;
  uVar4 = pVVar2->y;
  fVar1 = (float)uVar3 * wireCornerLinePercentage;
  fVar5 = (float)uVar4 * wireCornerLinePercentage;
  fVar6 = pVVar2->z * wireCornerLinePercentage;
  if (this_00 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    fVar7 = fVar1;
    pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffc8,this_00,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    q_05.y = box._rotation.y;
    q_05.x = box._rotation.x;
    q_05.z = box._rotation.z;
    q_05.w = box._rotation.w;
    s_05.y = fVar5;
    s_05.x = fVar7;
    s_05.z = fVar6;
    pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff40,(Vector3)*pVVar8,q_05,s_05,(MethodInfo *)0x0
                        );
    pSVar10 = (String *)pMVar9->m00;
    pSVar11 = (String *)pMVar9->m10;
    pVVar12 = (VisualTreeAsset *)pMVar9->m20;
    fVar13 = pMVar9->m30;
    fVar7 = pMVar9->m01;
    fVar14 = pMVar9->m11;
    fVar15 = pMVar9->m21;
    fVar16 = pMVar9->m31;
    fVar17 = pMVar9->m02;
    fVar18 = pMVar9->m12;
    puVar19 = (undefined *)pMVar9->m22;
    pGVar20 = (Graphics__Class *)pMVar9->m32;
    fVar21 = pMVar9->m03;
    fVar22 = pMVar9->m13;
    fVar23 = pMVar9->m23;
    fVar24 = pMVar9->m33;
    if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
      puVar19 = &UNK_?;
      pGVar20 = TypeInfo__UnityEngine__Graphics;
      func_?();
    }
    matrix.m10 = (float)pSVar11;
    matrix.m00 = (float)pSVar10;
    matrix.m20 = (float)pVVar12;
    matrix.m30 = fVar13;
    matrix.m01 = fVar7;
    matrix.m11 = fVar14;
    matrix.m21 = fVar15;
    matrix.m31 = fVar16;
    matrix.m02 = fVar17;
    matrix.m12 = fVar18;
    matrix.m22 = (float)puVar19;
    matrix.m32 = (float)pGVar20;
    matrix.m03 = fVar21;
    matrix.m13 = fVar22;
    matrix.m23 = fVar23;
    matrix.m33 = fVar24;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh_00,matrix,(MethodInfo *)0x0);
    pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffc8,this_00,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    fVar14 = fVar1 * _UNK_?;
    fVar7 = (float)pVVar8->path;
    q_06.y = box._rotation.y;
    q_06.x = box._rotation.x;
    q_06.z = box._rotation.z;
    q_06.w = box._rotation.w;
    s_06.y = fVar5;
    s_06.x = fVar14;
    s_06.z = fVar6;
    pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff40,(Vector3)*pVVar8,q_06,s_06,(MethodInfo *)0x0
                        );
    box._center.y = 0.0;
    fVar5 = pMVar9->m11;
    mesh = (Mesh *)pMVar9->m21;
    uVar25 = pMVar9->m03;
    uVar26 = pMVar9->m13;
    uVar27 = pMVar9->m23;
    box._center.x = pMVar9->m33;
    box._size.x = (float)uVar25;
    box._size.y = (float)uVar26;
    box._size.z = (float)uVar27;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh_00,*pMVar9,(MethodInfo *)0x0);
    box._center.y =
         (float)MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_;
    box._size.y = (float)&stack0xffffffc8;
    box._center.x = 1.4013e-45;
    box._size.x = (float)&UNK_?;
    box._size.z = (float)this_00;
    pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)box._size.y,this_00,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    fVar15 = fVar5 * _UNK_?;
    q.y = box._rotation.y;
    q.x = box._rotation.x;
    q.z = box._rotation.z;
    q.w = box._rotation.w;
    s.y = fVar15;
    s.x = fVar14;
    s.z = fVar6;
    pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff40,(Vector3)*pVVar8,q,s,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar9,(MethodInfo *)0x0);
    pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffc8,this_00,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    q_00.y = box._rotation.y;
    q_00.x = box._rotation.x;
    q_00.z = box._rotation.z;
    q_00.w = box._rotation.w;
    s_00.y = fVar15;
    s_00.x = fVar1;
    s_00.z = fVar6;
    pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff40,(Vector3)*pVVar8,q_00,s_00,(MethodInfo *)0x0
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar9,(MethodInfo *)0x0);
    pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffc8,this_00,7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    fVar7 = fVar7 * _UNK_?;
    q_01.y = box._rotation.y;
    q_01.x = box._rotation.x;
    q_01.z = box._rotation.z;
    q_01.w = box._rotation.w;
    s_01.y = fVar5;
    s_01.x = fVar1 * _UNK_?;
    s_01.z = fVar7;
    pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff40,(Vector3)*pVVar8,q_01,s_01,(MethodInfo *)0x0
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar9,(MethodInfo *)0x0);
    pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffc8,this_00,6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    q_02.y = box._rotation.y;
    q_02.x = box._rotation.x;
    q_02.z = box._rotation.z;
    q_02.w = box._rotation.w;
    s_02.y = fVar5;
    s_02.x = fVar1;
    s_02.z = fVar7;
    pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff40,(Vector3)*pVVar8,q_02,s_02,(MethodInfo *)0x0
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar9,(MethodInfo *)0x0);
    pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffc8,this_00,5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    fVar5 = fVar5 * _UNK_?;
    q_03.y = box._rotation.y;
    q_03.x = box._rotation.x;
    q_03.z = box._rotation.z;
    q_03.w = box._rotation.w;
    s_03.y = fVar5;
    s_03.x = fVar1;
    s_03.z = fVar7;
    pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff40,(Vector3)*pVVar8,q_03,s_03,(MethodInfo *)0x0
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar9,(MethodInfo *)0x0);
    pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffc8,this_00,4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    q_04.y = box._rotation.y;
    q_04.x = box._rotation.x;
    q_04.z = box._rotation.z;
    q_04.w = box._rotation.w;
    s_04.y = fVar5;
    s_04.x = fVar1 * _UNK_?;
    s_04.z = fVar7;
    pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff40,(Vector3)*pVVar8,q_04,s_04,(MethodInfo *)0x0
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar9,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}

