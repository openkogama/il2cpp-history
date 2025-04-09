
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
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                       (camera,(MethodInfo *)0x0);
    pSStack_2 = (Singleton_1_MeshPool___Class *)(fVar1 + _UNK_?);
    position.z = (float)pSStack_2;
    position._0_8_ = quadCenter;
    pSStack_3 = pSStack_2;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
                       (&VStack_5,camera,position,(MethodInfo *)0x0);
    fVar6 = quadSize.x * _UNK_?;
    uVar7 = pVVar4->y;
    fVar1 = pVVar4->z;
    puStack_8 = (undefined *)(quadSize.y * _UNK_?);
    pSStack_3 = pSStack_2;
    position_00.y = (float)puStack_8 + quadCenter.y;
    position_00.x = quadCenter.x - fVar6;
    position_00.z = (float)pSStack_2;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
                       (&VStack_5,camera,position_00,(MethodInfo *)0x0);
    VStack_9.y = pVVar4->x;
    VStack_9.z = pVVar4->y;
    fStack_10 = pVVar4->z;
    pSStack_3 = pSStack_2;
    position_01.y = quadCenter.y - (float)puStack_8;
    position_01.x = fVar6 + quadCenter.x;
    position_01.z = (float)pSStack_2;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
                       (&VStack_5,camera,position_01,(MethodInfo *)0x0);
    uVar11 = pVVar4->x;
    uVar12 = pVVar4->y;
    fVar6 = pVVar4->z;
    this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)camera,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar13 = (float)uVar11 - VStack_9.y;
    fVar14 = (TypeInfo__UnityEngine__Vector3->static_fields->oneVector).z;
    fStack_15 = (float)uVar12 - VStack_9.z;
    VStack_5.z = fStack_15;
    VStack_5.y = fVar13;
    pSStack_2 = (Singleton_1_MeshPool___Class *)(fVar6 - fStack_10);
    pSStack_3 = pSStack_2;
    if (this != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                         (&VStack_9,this,(MethodInfo *)0x0);
      v1.z = (float)pSStack_3;
      v1.x = VStack_5.y;
      v1.y = VStack_5.z;
      puStack_8 = (undefined *)Vector3Ex::Vector3Ex_Dot(v1,*pVVar4,(MethodInfo *)0x0);
      uVar16 = (uint)puStack_8 & _UNK_?;
      pSStack_3 = pSStack_2;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                         (&VStack_9,this,(MethodInfo *)0x0);
      v1_00.y = fStack_15;
      v1_00.x = fVar13;
      v1_00.z = (float)pSStack_3;
      fStack_15 = Vector3Ex::Vector3Ex_Dot(v1_00,*pVVar4,(MethodInfo *)0x0);
      puStack_8 = (undefined *)((uint)fStack_15 & _UNK_?);
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (&VStack_5,this,(MethodInfo *)0x0);
      pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                         ((Quaternion *)&stack0xffffff90,rotationDegrees,*pVVar4,(MethodInfo *)0x0);
      uVar18 = 0;
      VStack_5.x = pQVar17->x;
      VStack_5.y = pQVar17->y;
      VStack_5.z = pQVar17->z;
      pSStack_3 = (Singleton_1_MeshPool___Class *)pQVar17->w;
      pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffff78,this,(MethodInfo *)0x0);
      fVar6 = pQVar17->y;
      fVar13 = pQVar17->z;
      fStack_10 = pQVar17->w;
      fStack_15 = (fStack_10 * VStack_5.x + pQVar17->x * (float)pSStack_3 + fVar13 * VStack_5.y) -
                  fVar6 * VStack_5.z;
      fVar19 = VStack_5.z * fVar13;
      fVar20 = (VStack_5.y * fStack_10 + fVar6 * (float)pSStack_3 + VStack_5.z * pQVar17->x) -
               fVar13 * VStack_5.x;
      fVar21 = fVar6 * VStack_5.y;
      VStack_5.z = (VStack_5.z * fStack_10 + fVar13 * (float)pSStack_3 + fVar6 * VStack_5.x) -
                    VStack_5.y * pQVar17->x;
      VStack_9.x = fStack_10 * (float)pSStack_3;
      VStack_9.z = fStack_10;
      VStack_9.y = fStack_10;
      VStack_5.y = fVar20;
      pSStack_3 = (Singleton_1_MeshPool___Class *)
                   (((VStack_9.x - VStack_5.x * pQVar17->x) - fVar21) - fVar19);
      s.y = (float)puStack_8;
      s.x = (float)uVar16;
      pos.y = (float)uVar7;
      pos.x = (float)uVar18;
      pos.z = fVar1;
      q.y = fVar20;
      q.x = fStack_15;
      q.z = VStack_5.z;
      q.w = (float)pSStack_3;
      s.z = fVar14;
      VStack_5.x = fStack_15;
      pMVar22 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                         ((Matrix4x4 *)&stack0xffffff38,pos,q,s,(MethodInfo *)0x0);
      fVar1 = pMVar22->m00;
      fVar6 = pMVar22->m10;
      fVar14 = pMVar22->m20;
      fVar13 = pMVar22->m30;
      VStack_5.x = pMVar22->m01;
      VStack_5.y = pMVar22->m11;
      VStack_5.z = pMVar22->m21;
      pSStack_3 = (Singleton_1_MeshPool___Class *)pMVar22->m31;
      VStack_9.x = pMVar22->m02;
      VStack_9.y = pMVar22->m12;
      VStack_9.z = pMVar22->m22;
      fStack_10 = pMVar22->m32;
      fVar20 = pMVar22->m03;
      fVar19 = pMVar22->m13;
      fVar21 = pMVar22->m23;
      fVar23 = pMVar22->m33;
      if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
        pSStack_2 = TypeInfo__RTG__Singleton<RTG::MeshPool>;
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
        matrix.m10 = fVar6;
        matrix.m00 = fVar1;
        matrix.m20 = fVar14;
        matrix.m30 = fVar13;
        matrix.m01 = VStack_5.x;
        matrix.m11 = VStack_5.y;
        matrix.m21 = VStack_5.z;
        matrix.m31 = (float)pSStack_3;
        matrix.m02 = VStack_9.x;
        matrix.m12 = VStack_9.y;
        matrix.m22 = VStack_9.z;
        matrix.m32 = fStack_10;
        matrix.m03 = fVar20;
        matrix.m13 = fVar19;
        matrix.m23 = fVar21;
        matrix.m33 = fVar23;
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                  (mesh,matrix,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
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
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                       (camera,(MethodInfo *)0x0);
    pSStack_2 = (Singleton_1_MeshPool___Class *)(fVar1 + _UNK_?);
    position.z = (float)pSStack_2;
    position._0_8_ = quadCenter;
    pSStack_3 = pSStack_2;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
                       (&VStack_5,camera,position,(MethodInfo *)0x0);
    fVar6 = quadSize.x * _UNK_?;
    uVar7 = pVVar4->y;
    fVar1 = pVVar4->z;
    puStack_8 = (undefined *)(quadSize.y * _UNK_?);
    pSStack_3 = pSStack_2;
    position_00.y = (float)puStack_8 + quadCenter.y;
    position_00.x = quadCenter.x - fVar6;
    position_00.z = (float)pSStack_2;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
                       (&VStack_5,camera,position_00,(MethodInfo *)0x0);
    VStack_9.y = pVVar4->x;
    VStack_9.z = pVVar4->y;
    fStack_10 = pVVar4->z;
    pSStack_3 = pSStack_2;
    position_01.y = quadCenter.y - (float)puStack_8;
    position_01.x = fVar6 + quadCenter.x;
    position_01.z = (float)pSStack_2;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToWorldPoint_1
                       (&VStack_5,camera,position_01,(MethodInfo *)0x0);
    uVar11 = pVVar4->x;
    uVar12 = pVVar4->y;
    fVar6 = pVVar4->z;
    this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)camera,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar13 = (float)uVar11 - VStack_9.y;
    fVar14 = (TypeInfo__UnityEngine__Vector3->static_fields->oneVector).z;
    fStack_15 = (float)uVar12 - VStack_9.z;
    VStack_5.z = fStack_15;
    VStack_5.y = fVar13;
    pSStack_2 = (Singleton_1_MeshPool___Class *)(fVar6 - fStack_10);
    pSStack_3 = pSStack_2;
    if (this != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                         (&VStack_9,this,(MethodInfo *)0x0);
      v1.z = (float)pSStack_3;
      v1.x = VStack_5.y;
      v1.y = VStack_5.z;
      puStack_8 = (undefined *)Vector3Ex::Vector3Ex_Dot(v1,*pVVar4,(MethodInfo *)0x0);
      uVar16 = (uint)puStack_8 & _UNK_?;
      pSStack_3 = pSStack_2;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                         (&VStack_9,this,(MethodInfo *)0x0);
      v1_00.y = fStack_15;
      v1_00.x = fVar13;
      v1_00.z = (float)pSStack_3;
      fStack_15 = Vector3Ex::Vector3Ex_Dot(v1_00,*pVVar4,(MethodInfo *)0x0);
      puStack_8 = (undefined *)((uint)fStack_15 & _UNK_?);
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (&VStack_5,this,(MethodInfo *)0x0);
      pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                         ((Quaternion *)&stack0xffffff90,rotationDegrees,*pVVar4,(MethodInfo *)0x0);
      uVar18 = 0;
      VStack_5.x = pQVar17->x;
      VStack_5.y = pQVar17->y;
      VStack_5.z = pQVar17->z;
      pSStack_3 = (Singleton_1_MeshPool___Class *)pQVar17->w;
      pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffff78,this,(MethodInfo *)0x0);
      fVar6 = pQVar17->y;
      fVar13 = pQVar17->z;
      fStack_10 = pQVar17->w;
      fStack_15 = (fStack_10 * VStack_5.x + pQVar17->x * (float)pSStack_3 + fVar13 * VStack_5.y) -
                  fVar6 * VStack_5.z;
      fVar19 = VStack_5.z * fVar13;
      fVar20 = (VStack_5.y * fStack_10 + fVar6 * (float)pSStack_3 + VStack_5.z * pQVar17->x) -
               fVar13 * VStack_5.x;
      fVar21 = fVar6 * VStack_5.y;
      VStack_5.z = (VStack_5.z * fStack_10 + fVar13 * (float)pSStack_3 + fVar6 * VStack_5.x) -
                    VStack_5.y * pQVar17->x;
      VStack_9.x = fStack_10 * (float)pSStack_3;
      VStack_9.z = fStack_10;
      VStack_9.y = fStack_10;
      VStack_5.y = fVar20;
      pSStack_3 = (Singleton_1_MeshPool___Class *)
                   (((VStack_9.x - VStack_5.x * pQVar17->x) - fVar21) - fVar19);
      s.y = (float)puStack_8;
      s.x = (float)uVar16;
      pos.y = (float)uVar7;
      pos.x = (float)uVar18;
      pos.z = fVar1;
      q.y = fVar20;
      q.x = fStack_15;
      q.z = VStack_5.z;
      q.w = (float)pSStack_3;
      s.z = fVar14;
      VStack_5.x = fStack_15;
      pMVar22 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                         ((Matrix4x4 *)&stack0xffffff38,pos,q,s,(MethodInfo *)0x0);
      fVar1 = pMVar22->m00;
      fVar6 = pMVar22->m10;
      fVar14 = pMVar22->m20;
      fVar13 = pMVar22->m30;
      VStack_5.x = pMVar22->m01;
      VStack_5.y = pMVar22->m11;
      VStack_5.z = pMVar22->m21;
      pSStack_3 = (Singleton_1_MeshPool___Class *)pMVar22->m31;
      VStack_9.x = pMVar22->m02;
      VStack_9.y = pMVar22->m12;
      VStack_9.z = pMVar22->m22;
      fStack_10 = pMVar22->m32;
      fVar20 = pMVar22->m03;
      fVar19 = pMVar22->m13;
      fVar21 = pMVar22->m23;
      fVar23 = pMVar22->m33;
      if ((TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).cctor_finished_or_no_cctor == 0) {
        pSStack_2 = TypeInfo__RTG__Singleton<RTG::MeshPool>;
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
        matrix.m10 = fVar6;
        matrix.m00 = fVar1;
        matrix.m20 = fVar14;
        matrix.m30 = fVar13;
        matrix.m01 = VStack_5.x;
        matrix.m11 = VStack_5.y;
        matrix.m21 = VStack_5.z;
        matrix.m31 = (float)pSStack_3;
        matrix.m02 = VStack_9.x;
        matrix.m12 = VStack_9.y;
        matrix.m22 = VStack_9.z;
        matrix.m32 = fStack_10;
        matrix.m03 = fVar20;
        matrix.m13 = fVar19;
        matrix.m23 = fVar21;
        matrix.m33 = fVar23;
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
                  (mesh,matrix,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
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
    fVar1 = 0.0;
code_?:
    wireCornerLinePercentage = fVar1;
  }
  else {
    fVar1 = _UNK_?;
    if (_UNK_? < wireCornerLinePercentage) goto code_?;
  }
  pVVar2 = OBB::OBB_get_Extents((Vector3 *)&stack0xffffffd8,(OBB *)&box,(MethodInfo *)0x0);
  uVar3 = pVVar2->x;
  uVar4 = pVVar2->y;
  fVar1 = (float)uVar3 * wireCornerLinePercentage;
  pVVar5 = (VisualTreeAsset *)(pVVar2->z * wireCornerLinePercentage);
  if (this_00 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    fVar6 = fVar1;
    fVar7 = (float)uVar4 * wireCornerLinePercentage;
    pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffb8,this_00,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar9 = pVVar8->alias;
    uVar10 = pVVar8->path;
    pos_05.y = (float)uVar10;
    pos_05.x = (float)uVar9;
    pVVar11 = pVVar8->asset;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pos_05.z = (float)pVVar11;
    s_05.y = (float)uVar4 * wireCornerLinePercentage;
    s_05.x = fVar1;
    s_05.z = (float)pVVar5;
    pMVar12 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff30,pos_05,
                         TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,s_05,
                         (MethodInfo *)0x0);
    pSVar13 = (String *)pMVar12->m00;
    pSVar14 = (String *)pMVar12->m10;
    pVVar15 = (VisualTreeAsset *)pMVar12->m20;
    fVar16 = pMVar12->m30;
    fVar17 = pMVar12->m01;
    fVar18 = pMVar12->m11;
    fVar19 = pMVar12->m21;
    fVar20 = pMVar12->m31;
    pSStack_21 = (String *)pMVar12->m02;
    pSStack_22 = (String *)pMVar12->m12;
    pVVar11 = (VisualTreeAsset *)pMVar12->m22;
    fVar23 = pMVar12->m32;
    fVar24 = pMVar12->m03;
    fVar25 = pMVar12->m13;
    puVar26 = (undefined *)pMVar12->m23;
    pGVar27 = (Graphics__Class *)pMVar12->m33;
    if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
      puVar26 = &UNK_?;
      pGVar27 = TypeInfo__UnityEngine__Graphics;
      func_?();
    }
    matrix.m10 = (float)pSVar14;
    matrix.m00 = (float)pSVar13;
    matrix.m20 = (float)pVVar15;
    matrix.m30 = fVar16;
    matrix.m01 = fVar17;
    matrix.m11 = fVar18;
    matrix.m21 = fVar19;
    matrix.m31 = fVar20;
    matrix.m02 = (float)pSStack_21;
    matrix.m12 = (float)pSStack_22;
    matrix.m22 = (float)pVVar11;
    matrix.m32 = fVar23;
    matrix.m03 = fVar24;
    matrix.m13 = fVar25;
    matrix.m23 = (float)puVar26;
    matrix.m33 = (float)pGVar27;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,matrix,(MethodInfo *)0x0);
    pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffb8,this_00,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    pVVar11 = (VisualTreeAsset *)pVVar8->alias;
    fVar17 = (float)pVVar8->path;
    pVVar15 = pVVar8->asset;
    fVar6 = fVar6 * _UNK_?;
    fVar18 = fVar6;
    if (cRam_? == '\0') {
      pVVar5 = (VisualTreeAsset *)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pos_06.y = fVar17;
    pos_06.x = (float)pVVar11;
    pos_06.z = (float)pVVar15;
    s_06.y = fVar7;
    s_06.x = fVar18;
    s_06.z = (float)pVVar5;
    pMVar12 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff30,pos_06,
                         TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,s_06,
                         (MethodInfo *)0x0);
    box._size.x = 0.0;
    pVVar28 = (VisualTreeAsset *)pMVar12->m30;
    fVar7 = pMVar12->m11;
    fVar18 = pMVar12->m21;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar12,(MethodInfo *)0x0);
    box._size.x = (float)
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
    ;
    pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffb8,this_00,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    pVVar5 = (VisualTreeAsset *)pVVar8->alias;
    uVar29 = pVVar8->path;
    pVVar11 = pVVar8->asset;
    fVar18 = fVar18 * _UNK_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pos.y = (float)uVar29;
    pos.x = (float)pVVar5;
    pos.z = (float)pVVar11;
    s.y = fVar18;
    s.x = fVar7;
    s.z = (float)pVVar28;
    pMVar12 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff30,pos,
                         TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,s,
                         (MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar12,(MethodInfo *)0x0);
    pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&pSStack_21,this_00,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    pVVar30 = (VisualTreeAsset *)pVVar8->alias;
    uVar31 = pVVar8->path;
    pVVar5 = pVVar8->asset;
    fVar18 = (float)pVVar15 * _UNK_?;
    fVar7 = fVar18;
    pVVar11 = pVVar28;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pos_00.y = (float)uVar31;
    pos_00.x = (float)pVVar30;
    pos_00.z = (float)pVVar5;
    s_00.y = fVar7;
    s_00.x = fVar1;
    s_00.z = (float)pVVar28;
    pMVar12 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff30,pos_00,
                         TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,s_00,
                         (MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar12,(MethodInfo *)0x0);
    pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffc8,this_00,7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    pVVar32 = (VisualTreeAsset *)pVVar8->alias;
    uVar33 = pVVar8->path;
    pVVar5 = pVVar8->asset;
    fVar1 = fVar1 * _UNK_?;
    fVar7 = (float)pVVar11 * _UNK_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pos_01.y = (float)uVar33;
    pos_01.x = (float)pVVar32;
    pos_01.z = (float)pVVar5;
    s_01.y = (float)pVVar15;
    s_01.x = fVar1;
    s_01.z = fVar7;
    pMVar12 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff30,pos_01,
                         TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,s_01,
                         (MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar12,(MethodInfo *)0x0);
    pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffc8,this_00,6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    pVVar34 = (VisualTreeAsset *)pVVar8->alias;
    uVar35 = pVVar8->path;
    pVVar5 = pVVar8->asset;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pos_02.y = (float)uVar35;
    pos_02.x = (float)pVVar34;
    pos_02.z = (float)pVVar5;
    s_02.y = (float)pVVar15;
    s_02.x = fVar17;
    s_02.z = fVar7;
    pMVar12 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff30,pos_02,
                         TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,s_02,
                         (MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar12,(MethodInfo *)0x0);
    pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffc8,this_00,5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    pVVar15 = (VisualTreeAsset *)pVVar8->alias;
    uVar36 = pVVar8->path;
    pVVar5 = pVVar8->asset;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pos_03.y = (float)uVar36;
    pos_03.x = (float)pVVar15;
    pos_03.z = (float)pVVar5;
    s_03.y = fVar18;
    s_03.x = fVar17;
    s_03.z = fVar7;
    pMVar12 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff30,pos_03,
                         TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,s_03,
                         (MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar12,(MethodInfo *)0x0);
    pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffc8,this_00,4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    pVVar37 = (VisualTreeAsset *)pVVar8->alias;
    uVar38 = pVVar8->path;
    pVVar5 = pVVar8->asset;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pos_04.y = (float)uVar38;
    pos_04.x = (float)pVVar37;
    pos_04.z = (float)pVVar5;
    s_04.y = fVar18;
    s_04.x = fVar6;
    s_04.z = fVar7;
    pMVar12 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff30,pos_04,
                         TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,s_04,
                         (MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar12,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar39 = (code *)swi(3);
  (*pcVar39)();
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
  fVar5 = (float)uVar3 * wireCornerLinePercentage;
  fVar1 = pVVar2->z * wireCornerLinePercentage;
  if (this_00 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    fVar6 = (float)uVar4 * wireCornerLinePercentage;
    pVVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffc8,this_00,3,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    q_05.y = box._rotation.y;
    q_05.x = box._rotation.x;
    q_05.z = box._rotation.z;
    q_05.w = box._rotation.w;
    s_05.y = (float)uVar4 * wireCornerLinePercentage;
    s_05.x = fVar5;
    s_05.z = fVar1;
    pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff30,(Vector3)*pVVar7,q_05,s_05,(MethodInfo *)0x0
                        );
    fVar9 = pMVar8->m00;
    fVar10 = pMVar8->m10;
    fVar11 = pMVar8->m20;
    fVar12 = pMVar8->m30;
    pSVar13 = (String *)pMVar8->m01;
    pSVar14 = (String *)pMVar8->m11;
    pVVar15 = (VisualTreeAsset *)pMVar8->m21;
    fVar16 = pMVar8->m31;
    fVar17 = pMVar8->m02;
    fVar18 = pMVar8->m12;
    fVar19 = pMVar8->m22;
    fVar20 = pMVar8->m32;
    fVar21 = pMVar8->m03;
    fVar22 = pMVar8->m13;
    puVar23 = (undefined *)pMVar8->m23;
    pGVar24 = (Graphics__Class *)pMVar8->m33;
    if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
      puVar23 = &UNK_?;
      pGVar24 = TypeInfo__UnityEngine__Graphics;
      func_?();
    }
    matrix.m10 = fVar10;
    matrix.m00 = fVar9;
    matrix.m20 = fVar11;
    matrix.m30 = fVar12;
    matrix.m01 = (float)pSVar13;
    matrix.m11 = (float)pSVar14;
    matrix.m21 = (float)pVVar15;
    matrix.m31 = fVar16;
    matrix.m02 = fVar17;
    matrix.m12 = fVar18;
    matrix.m22 = fVar19;
    matrix.m32 = fVar20;
    matrix.m03 = fVar21;
    matrix.m13 = fVar22;
    matrix.m23 = (float)puVar23;
    matrix.m33 = (float)pGVar24;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh_00,matrix,(MethodInfo *)0x0);
    pVVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffc8,this_00,2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    uVar25 = pVVar7->path;
    q_06.y = box._rotation.y;
    q_06.x = box._rotation.x;
    q_06.z = box._rotation.z;
    q_06.w = box._rotation.w;
    s_06.y = fVar6;
    s_06.x = fVar5 * _UNK_?;
    s_06.z = fVar1;
    pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff30,(Vector3)*pVVar7,q_06,s_06,(MethodInfo *)0x0
                        );
    box._size.x = 0.0;
    fVar16 = pMVar8->m21;
    fVar17 = pMVar8->m02;
    mesh = (Mesh *)pMVar8->m22;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh_00,*pMVar8,(MethodInfo *)0x0);
    box._size.x = (float)
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
    ;
    pVVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffc8,this_00,1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    pVStack26 = pVVar7->asset;
    uVar27 = pVVar7->path;
    box._40_4_ = &UNK_?;
    q.y = box._rotation.y;
    q.x = box._rotation.x;
    q.z = box._rotation.z;
    q.w = box._rotation.w;
    s.y = fVar17 * _UNK_?;
    s.x = (float)uVar25;
    s.z = fVar1;
    uStack28 = uVar27;
    pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff30,(Vector3)*pVVar7,q,s,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar8,(MethodInfo *)0x0);
    pVVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffc8,this_00,0,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    fVar18 = fVar16 * _UNK_?;
    q_00.y = box._rotation.y;
    q_00.x = box._rotation.x;
    q_00.z = box._rotation.z;
    q_00.w = box._rotation.w;
    s_00.y = fVar18;
    s_00.x = fVar5;
    s_00.z = fVar1;
    fVar17 = fVar5;
    pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff30,(Vector3)*pVVar7,q_00,s_00,(MethodInfo *)0x0
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar8,(MethodInfo *)0x0);
    pVVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffc8,this_00,7,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    fVar1 = fVar1 * _UNK_?;
    q_01.y = box._rotation.y;
    q_01.x = box._rotation.x;
    q_01.z = box._rotation.z;
    q_01.w = box._rotation.w;
    s_01.y = fVar16;
    s_01.x = fVar17 * _UNK_?;
    s_01.z = fVar1;
    pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff30,(Vector3)*pVVar7,q_01,s_01,(MethodInfo *)0x0
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar8,(MethodInfo *)0x0);
    pVVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffc8,this_00,6,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    q_02.y = box._rotation.y;
    q_02.x = box._rotation.x;
    q_02.z = box._rotation.z;
    q_02.w = box._rotation.w;
    s_02.y = fVar16;
    s_02.x = fVar5;
    s_02.z = fVar1;
    pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff30,(Vector3)*pVVar7,q_02,s_02,(MethodInfo *)0x0
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar8,(MethodInfo *)0x0);
    pVVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffc8,this_00,5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    q_03.y = box._rotation.y;
    q_03.x = box._rotation.x;
    q_03.z = box._rotation.z;
    q_03.w = box._rotation.w;
    s_03.y = fVar18;
    s_03.x = fVar5;
    s_03.z = fVar1;
    pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff30,(Vector3)*pVVar7,q_03,s_03,(MethodInfo *)0x0
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar8,(MethodInfo *)0x0);
    pVVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                        ((VisualTreeAsset_UsingEntry *)&stack0xffffffc8,this_00,4,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                        );
    q_04.y = box._rotation.y;
    q_04.x = box._rotation.x;
    q_04.z = box._rotation.z;
    q_04.w = box._rotation.w;
    s_04.y = fVar18;
    s_04.x = (float)uVar25;
    s_04.z = fVar1;
    pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff30,(Vector3)*pVVar7,q_04,s_04,(MethodInfo *)0x0
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_3
              (mesh,*pMVar8,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}

