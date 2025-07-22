
/* AABB CalculateFrustumAABB(Camera) */

AABB * Assembly-CSharp.dll::RTG::CameraEx::CameraEx_CalculateFrustumAABB
                 (AABB *__return_storage_ptr__,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (camera != (Camera *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)camera,(MethodInfo *)0x0);
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                       (camera,(MethodInfo *)0x0);
    if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                       (camera,(MethodInfo *)0x0);
    dVar3 = (double)(fVar2 * _UNK_? * _UNK_?);
    func_?();
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_aspect
                       (camera,(MethodInfo *)0x0);
    fVar2 = fVar2 * (fVar1 + fVar1) * (float)dVar3;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                       (camera,(MethodInfo *)0x0);
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                       (camera,(MethodInfo *)0x0);
    dVar3 = (double)(fVar4 * _UNK_? * _UNK_?);
    VStack_5.z = (float)&UNK_?;
    func_?();
    fVar1 = (float)dVar3 * (fVar1 + fVar1);
    if (this != (Transform *)0x0) {
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_5,this,(MethodInfo *)0x0);
      uVar7 = pVVar6->x;
      uVar8 = pVVar6->y;
      fVar4 = pVVar6->z;
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          ((Vector3 *)&stack0xffffffac,this,(MethodInfo *)0x0);
      VStack_5.x = pVVar6->x;
      VStack_5.y = pVVar6->y;
      VStack_5.z = pVVar6->z;
      fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                         (camera,(MethodInfo *)0x0);
      fVar10 = VStack_5.x * fVar9;
      fVar11 = VStack_5.y * fVar9;
      fVar9 = VStack_5.z * fVar9;
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          ((Vector3 *)&stack0xffffffac,this,(MethodInfo *)0x0);
      uVar12 = pVVar6->x;
      uVar13 = pVVar6->y;
      fVar14 = (float)uVar12 * fVar2 * _UNK_?;
      fVar15 = (float)uVar13 * fVar2 * _UNK_?;
      fVar16 = pVVar6->z * fVar2 * _UNK_?;
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          ((Vector3 *)&stack0xffffffac,this,(MethodInfo *)0x0);
      uVar17 = pVVar6->x;
      uVar18 = pVVar6->y;
      fVar19 = pVVar6->z * fVar1 * _UNK_?;
      IStack_20.klass =
           (IEnumerable_1_UnityEngine_Vector3___Class *)
           ((((float)uVar7 + fVar10) - fVar14) + (float)uVar17 * fVar1 * _UNK_?);
      IStack_20.monitor =
           (MonitorData *)
           ((((float)uVar8 + fVar11) - fVar15) + (float)uVar18 * fVar1 * _UNK_?);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                ((Vector3 *)&stack0xffffffac,this,(MethodInfo *)0x0);
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          ((Vector3 *)&stack0xffffffac,this,(MethodInfo *)0x0);
      uVar21 = pVVar6->x;
      uVar22 = pVVar6->y;
      fVar15 = (float)IStack_20.klass - (float)uVar21 * fVar1;
      fVar1 = (float)IStack_20.monitor - (float)uVar22 * fVar1;
      fVar11 = 0.0;
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          ((Vector3 *)&stack0xffffffac,this,(MethodInfo *)0x0);
      uVar23 = pVVar6->x;
      uVar24 = pVVar6->y;
      pMStack_25 = (MonitorData *)(fVar1 + (float)uVar24 * fVar2);
      pIStack_26 = (IEnumerable_1_UnityEngine_Vector3___Class *)(fVar11 + pVVar6->z * fVar2);
      pMVar27 = (MonitorData *)0x5;
      pMVar28 = (MonitorData *)&UNK_?;
      pIVar29 = (IEnumerable_1_UnityEngine_Vector3___Class *)TypeInfo__UnityEngine__Vector3;
      pointCloud = (IEnumerable_1_UnityEngine_Vector3_ *)func_?();
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffac,this,(MethodInfo *)0x0);
      if (pointCloud != (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
        fVar11 = pVVar6->y;
        pIVar30 = (IEnumerable_1_UnityEngine_Vector3___Class *)pVVar6->z;
        if (pointCloud[1].monitor != (MonitorData *)0x0) {
          pointCloud[2].klass = (IEnumerable_1_UnityEngine_Vector3___Class *)pVVar6->x;
          pointCloud[2].monitor = (MonitorData *)fVar11;
          pointCloud[3].klass = pIVar30;
          if ((MonitorData *)0x1 < pointCloud[1].monitor) {
            *(IEnumerable_1_UnityEngine_Vector3_ *)&pointCloud[3].monitor = IStack_20;
            IStack_20.monitor = pMVar28;
            IStack_20.klass = pIVar29;
            pointCloud[4].monitor = (MonitorData *)(((fVar4 + fVar9) - fVar16) + fVar19);
            if ((MonitorData *)0x2 < pointCloud[1].monitor) {
              pointCloud[5] = IStack_20;
              IStack_20.monitor = (MonitorData *)fVar1;
              IStack_20.klass = (IEnumerable_1_UnityEngine_Vector3___Class *)fVar15;
              pointCloud[6].klass = pIStack_31;
              if ((MonitorData *)0x3 < pointCloud[1].monitor) {
                *(IEnumerable_1_UnityEngine_Vector3_ *)&pointCloud[6].monitor = IStack_20;
                IStack_20.monitor = pMStack_25;
                IStack_20.klass =
                     (IEnumerable_1_UnityEngine_Vector3___Class *)(fVar15 + (float)uVar23 * fVar2);
                pointCloud[7].monitor = pMVar27;
                if ((MonitorData *)0x4 < pointCloud[1].monitor) {
                  pointCloud[8] = IStack_20;
                  pointCloud[9].klass = pIStack_26;
                  (__return_storage_ptr__->_size).x = 0.0;
                  (__return_storage_ptr__->_size).y = 0.0;
                  (__return_storage_ptr__->_size).z = 0.0;
                  (__return_storage_ptr__->_center).x = 0.0;
                  (__return_storage_ptr__->_center).y = 0.0;
                  (__return_storage_ptr__->_center).z = 0.0;
                  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
                  AABB::AABB__ctor_2(__return_storage_ptr__,pointCloud,(MethodInfo *)0x0);
                  return __return_storage_ptr__;
                }
              }
            }
          }
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar32 = (code *)swi(3);
  pAVar33 = (AABB *)(*pcVar32)();
  return pAVar33;
}


/* AABB CalculateOrthoAABB(Camera) */

AABB * Assembly-CSharp.dll::RTG::CameraEx::CameraEx_CalculateOrthoAABB
                 (AABB *__return_storage_ptr__,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (camera != (Camera *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographicSize
                       (camera,(MethodInfo *)0x0);
    fVar1 = fVar1 + fVar1;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_aspect
                       (camera,(MethodInfo *)0x0);
    fVar2 = fVar2 * fVar1;
    this = (IEnumerable_1_UnityEngine_Vector3___Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)camera,(MethodInfo *)0x0);
    if (this != (IEnumerable_1_UnityEngine_Vector3___Class *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_4,(Transform *)this,(MethodInfo *)0x0);
      method_00 = pVVar3->x;
      uVar5 = pVVar3->y;
      fVar6 = pVVar3->z;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          ((Vector3 *)&puStack_7,(Transform *)this,(MethodInfo *)method_00);
      VStack_4.x = pVVar3->x;
      VStack_4.y = pVVar3->y;
      VStack_4.z = pVVar3->z;
      pIStack_8 = (IEnumerable_1_UnityEngine_Vector3___Class *)
                   UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                             (camera,(MethodInfo *)0x0);
      fVar9 = (float)pIStack_8 * VStack_4.x;
      fVar10 = (float)pIStack_8 * VStack_4.y;
      fVar11 = (float)pIStack_8 * VStack_4.z;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          ((Vector3 *)&puStack_7,(Transform *)this,(MethodInfo *)0x0);
      uVar12 = pVVar3->x;
      uVar13 = pVVar3->y;
      fVar14 = (float)uVar12 * fVar2 * _UNK_?;
      fVar15 = (float)uVar13 * fVar2 * _UNK_?;
      fVar16 = pVVar3->z * fVar2 * _UNK_?;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          ((Vector3 *)&puStack_7,(Transform *)this,(MethodInfo *)0x0);
      uVar17 = pVVar3->x;
      uVar18 = pVVar3->y;
      pIVar19 = (IEnumerable_1_UnityEngine_Vector3___Class *)
                (((fVar9 + 0.0) - fVar14) + (float)uVar17 * fVar1 * _UNK_?);
      pMStack_20 = (MonitorData *)
                   (((fVar10 + (float)uVar5) - fVar15) + (float)uVar18 * fVar1 * _UNK_?);
      pIVar21 = (IEnumerable_1_UnityEngine_Vector3___Class *)
                (((fVar11 + fVar6) - fVar16) + pVVar3->z * fVar1 * _UNK_?);
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          ((Vector3 *)&puStack_7,(Transform *)this,(MethodInfo *)0x0);
      uVar22 = pVVar3->x;
      uVar23 = pVVar3->y;
      fVar6 = pVVar3->z;
      fVar24 = (float)pIVar19 + (float)uVar22 * fVar2;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          ((Vector3 *)&puStack_7,(Transform *)this,(MethodInfo *)0x0);
      uVar25 = pVVar3->x;
      pIVar26 = (IEnumerable_1_UnityEngine_Vector3___Class *)(fVar24 - (float)uVar25 * fVar1);
      fVar10 = 0.0;
      pIVar27 = this;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          ((Vector3 *)&puStack_7,(Transform *)this,(MethodInfo *)0x0);
      uVar28 = pVVar3->x;
      uVar29 = pVVar3->y;
      fStack_30 = (float)pIVar26 - (float)uVar28 * fVar2;
      fStack_31 = fVar10 - (float)uVar29 * fVar2;
      pMStack_32 = (MonitorData *)((float)pIVar27 - pVVar3->z * fVar2);
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&puStack_7,(Transform *)this,(MethodInfo *)0x0);
      VStack_4.x = pVVar3->x;
      VStack_4.y = pVVar3->y;
      VStack_4.z = pVVar3->z;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          ((Vector3 *)&puStack_7,(Transform *)this,(MethodInfo *)0x0);
      uVar33 = pVVar3->x;
      uVar34 = pVVar3->y;
      fVar10 = pVVar3->z;
      pIStack_8 = (IEnumerable_1_UnityEngine_Vector3___Class *)
                   UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                             (camera,(MethodInfo *)0x0);
      fVar9 = (float)pIStack_8 * (float)uVar33 + VStack_4.x;
      fVar11 = (float)pIStack_8 * (float)uVar34 + VStack_4.y;
      fVar10 = (float)pIStack_8 * fVar10 + VStack_4.z;
      pMVar35 = (MonitorData *)0x0;
      pIVar27 = this;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          ((Vector3 *)&puStack_7,(Transform *)this,(MethodInfo *)0x0);
      uVar36 = pVVar3->x;
      uVar37 = pVVar3->y;
      fVar15 = (float)uVar36 * fVar2 * _UNK_?;
      fVar16 = (float)uVar37 * fVar2 * _UNK_?;
      fVar14 = pVVar3->z * fVar2 * _UNK_?;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          ((Vector3 *)&puStack_7,(Transform *)this,(MethodInfo *)0x0);
      uVar38 = pVVar3->x;
      uVar39 = pVVar3->y;
      pIVar40 = (IEnumerable_1_UnityEngine_Vector3___Class *)
                ((fVar9 - fVar15) + (float)uVar38 * fVar1 * _UNK_?);
      pMVar41 = (MonitorData *)((fVar11 - fVar16) + (float)uVar39 * fVar1 * _UNK_?);
      pIVar42 = (IEnumerable_1_UnityEngine_Vector3___Class *)
                ((fVar10 - fVar14) + pVVar3->z * fVar1 * _UNK_?);
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          ((Vector3 *)&puStack_7,(Transform *)this,(MethodInfo *)0x0);
      uVar43 = pVVar3->x;
      uVar44 = pVVar3->y;
      fVar10 = (float)pIVar40 + (float)uVar43 * (float)&puStack_7;
      puStack_45 = (undefined *)((float)pMVar41 + (float)uVar44 * (float)&puStack_7);
      pMStack_46 = (MonitorData *)((float)pIVar42 + pVVar3->z * (float)&puStack_7);
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          ((Vector3 *)&puStack_7,(Transform *)this,(MethodInfo *)0x0);
      uVar47 = pVVar3->x;
      uVar48 = pVVar3->y;
      pIVar49 = (IEnumerable_1_UnityEngine_Vector3___Class *)(fVar10 - (float)uVar47 * fVar1);
      pMStack_50 = (MonitorData *)((float)puStack_45 - (float)uVar48 * fVar1);
      pIStack_8 = (IEnumerable_1_UnityEngine_Vector3___Class *)
                   ((float)pMStack_46 - pVVar3->z * fVar1);
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          ((Vector3 *)&puStack_7,(Transform *)this,(MethodInfo *)0x0);
      uVar51 = pVVar3->y;
      fStack_52 = (float)pMStack_50 - (float)uVar51 * (float)&puStack_7;
      pMStack_53 = (MonitorData *)((float)pIStack_8 - pVVar3->z * (float)&puStack_7);
      pointCloud = (IEnumerable_1_UnityEngine_Vector3_ *)func_?();
      IStack_54.klass = pIVar19;
      if (pointCloud != (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
        if (pointCloud[1].monitor != (MonitorData *)0x0) {
          pointCloud[2] = IStack_54;
          IStack_54 = (IEnumerable_1_UnityEngine_Vector3_)
                      CONCAT44((float)pMStack_20 + (float)uVar23 * fVar2,fVar24);
          pointCloud[3].klass = pIVar21;
          if ((MonitorData *)0x1 < pointCloud[1].monitor) {
            *(IEnumerable_1_UnityEngine_Vector3_ *)&pointCloud[3].monitor = IStack_54;
            pMStack_20 = pMVar35;
            IStack_54.klass = pIVar26;
            pointCloud[4].monitor = (MonitorData *)((float)pIVar21 + fVar6 * fVar2);
            if ((MonitorData *)0x2 < pointCloud[1].monitor) {
              pointCloud[5] = IStack_54;
              IStack_54 = (IEnumerable_1_UnityEngine_Vector3_)CONCAT44(fStack_31,fStack_30);
              pointCloud[6].klass = pIVar27;
              if ((MonitorData *)0x3 < pointCloud[1].monitor) {
                *(IEnumerable_1_UnityEngine_Vector3_ *)&pointCloud[6].monitor = IStack_54;
                pMStack_20 = pMVar41;
                IStack_54.klass = pIVar40;
                pointCloud[7].monitor = pMStack_32;
                if ((MonitorData *)0x4 < pointCloud[1].monitor) {
                  pointCloud[8] = IStack_54;
                  IStack_54 = (IEnumerable_1_UnityEngine_Vector3_)CONCAT44(puStack_45,fVar10);
                  pointCloud[9].klass = pIVar42;
                  if ((MonitorData *)0x5 < pointCloud[1].monitor) {
                    *(IEnumerable_1_UnityEngine_Vector3_ *)&pointCloud[9].monitor = IStack_54;
                    pMStack_20 = pMStack_50;
                    IStack_54.klass = pIVar49;
                    pointCloud[10].monitor = pMStack_46;
                    if ((MonitorData *)0x6 < pointCloud[1].monitor) {
                      pointCloud[0xb] = IStack_54;
                      IStack_54 = (IEnumerable_1_UnityEngine_Vector3_)
                                  CONCAT44(fStack_52,&UNK_?);
                      pointCloud[0xc].klass = pIStack_8;
                      if ((MonitorData *)0x7 < pointCloud[1].monitor) {
                        *(IEnumerable_1_UnityEngine_Vector3_ *)&pointCloud[0xc].monitor = IStack_54;
                        pointCloud[0xd].monitor = pMStack_53;
                        _UNK_? = 0;
                        _UNK_? = 0;
                        _UNK_? = 0;
                        _UNK_? = 0;
                        _UNK_? = 0;
                        _UNK_? = 0;
                        AABB::AABB__ctor_2((AABB *)&UNK_?,pointCloud,(MethodInfo *)0x0);
                        return (AABB *)&UNK_?;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar55 = (code *)swi(3);
  pAVar56 = (AABB *)(*pcVar55)();
  return pAVar56;
}


/* AABB CalculateVolumeAABB(Camera) */

AABB * Assembly-CSharp.dll::RTG::CameraEx::CameraEx_CalculateVolumeAABB
                 (AABB *__return_storage_ptr__,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  if (camera != (Camera *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                      (camera,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pAVar2 = CameraEx_CalculateFrustumAABB((AABB *)&stack0xffffffe0,camera,(MethodInfo *)0x0);
    }
    else {
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pAVar2 = CameraEx_CalculateOrthoAABB((AABB *)&stack0xffffffe0,camera,(MethodInfo *)0x0);
    }
    fVar3 = (pAVar2->_size).y;
    fVar4 = (pAVar2->_size).z;
    fVar5 = (pAVar2->_center).x;
    bVar1 = pAVar2->_isValid;
    uVar6 = *(undefined3 *)&pAVar2->field_0x19;
    (__return_storage_ptr__->_size).x = (pAVar2->_size).x;
    (__return_storage_ptr__->_size).y = fVar3;
    (__return_storage_ptr__->_size).z = fVar4;
    (__return_storage_ptr__->_center).x = fVar5;
    fVar3 = (pAVar2->_center).z;
    (__return_storage_ptr__->_center).y = (pAVar2->_center).y;
    (__return_storage_ptr__->_center).z = fVar3;
    __return_storage_ptr__->_isValid = bVar1;
    *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar6;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pAVar2 = (AABB *)(*pcVar7)();
  return pAVar2;
}


/* List`1[UnityEngine.Vector2] ConvertWorldToScreenPoints(Camera, List`1[UnityEngine.Vector3]) */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::CameraEx::CameraEx_ConvertWorldToScreenPoints
          (Camera *camera,List_1_UnityEngine_Vector3_ *worldPoints,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff8c;
  puVar5 = &stack0xffffff8c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                   );
    in_stack_6 =
         &MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_;
    func_?();
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_7._current.FirstAxisSign = 0;
  LStack_7._current.SecondAxisSign = 0;
  LStack_7._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0;
  LStack_7._index = 0;
  LStack_7._version = 0;
  LStack_7._current.Quadrant = 0;
  if (worldPoints != (List_1_UnityEngine_Vector3_ *)0x0) {
    if ((worldPoints->fields)._size == 0) {
      pLVar8 = (List_1_UnityEngine_Vector2_ *)
                func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar8,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
      *unaff_FS_OFFSET = uStack_3;
      return pLVar8;
    }
    capacity = (worldPoints->fields)._size;
    this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
              (this,capacity,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
    pLStack_9 = this;
    pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__GetEnumerator
                        (&LStack_11,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)worldPoints,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                        );
    uStack_12 = 0;
    LStack_7._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar10->_list;
    LStack_7._index = pLVar10->_index;
    LStack_7._version = pLVar10->_version;
    LStack_7._current.Quadrant = (int32_t)(pLVar10->_current).alias;
    uVar13 = (pLVar10->_current).path;
    uVar14 = (pLVar10->_current).asset;
    uStack_1 = 1;
    LStack_7._current.FirstAxisSign = uVar13;
    LStack_7._current.SecondAxisSign = uVar14;
    pLStack_15 = &LStack_7;
    while( true ) {
      while( true ) {
        bVar16 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[RTG::
                PlaneIdHelper+PlaneQuadrantInfo]::
                List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo__MoveNext
                          (&LStack_7,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                          );
        if (bVar16 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_7,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                     ,(MethodInfo *)in_stack_6);
          *unaff_FS_OFFSET = uStack_3;
          return (List_1_UnityEngine_Vector2_ *)this;
        }
        if (camera == (Camera *)0x0) goto code_?;
        position.y = (float)LStack_7._current.FirstAxisSign;
        position.x = (float)LStack_7._current.Quadrant;
        position.z = (float)LStack_7._current.SecondAxisSign;
        pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                            ((Vector3 *)&LStack_11._current,camera,position,(MethodInfo *)0x0);
        pMVar18 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        VStack_19.x = pVVar17->x;
        VStack_19.y = pVVar17->y;
        fStack_20 = VStack_19.x;
        pSStack_21 = (String *)VStack_19.y;
        if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                     *)0x0) goto code_?;
        piVar22 = &(this->fields)._version;
        *piVar22 = *piVar22 + 1;
        pMVar23 = (this->fields)._items;
        uVar24 = (this->fields)._size;
        if (pMVar23 == (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)0x0)
        goto code_?;
        if (uVar24 < pMVar23->max_length) break;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__AddWithResize
                  ((List_1_UnityEngine_Vector2_ *)this,VStack_19,
                   pMVar18->klass->rgctx_data[0xe].method);
      }
      (this->fields)._size = uVar24 + 1;
      if (pMVar23->max_length <= uVar24) break;
      (&pMVar23->vector[0].index)[uVar24 * 2] = (int32_t)VStack_19.x;
      (&pMVar23->vector[0].name)[uVar24 * 2] = (String *)VStack_19.y;
    }
    func_?();
  }
code_?:
  uVar25 = func_?();
  func_?(uVar25);
  pcVar26 = (code *)swi(3);
  pLVar8 = (List_1_UnityEngine_Vector2_ *)(*pcVar26)();
  return pLVar8;
}


/* Single EstimateZoomFactor(Camera, Vector3) */

float Assembly-CSharp.dll::RTG::CameraEx::CameraEx_EstimateZoomFactor
                (Camera *camera,Vector3 worldPos,MethodInfo *method)

{
  if (camera != (Camera *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                      (camera,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographicSize
                        (camera,(MethodInfo *)0x0);
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelHeight
                        (camera,(MethodInfo *)0x0);
      return (fVar2 + fVar2) / ((float)iVar3 * _UNK_?);
    }
    this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)camera,(MethodInfo *)0x0);
    if (this != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (&VStack_5,this,(MethodInfo *)0x0);
      uVar6 = pVVar4->x;
      uVar7 = pVVar4->y;
      fVar2 = pVVar4->z;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffd0,this,(MethodInfo *)0x0);
      VStack_5.x = pVVar4->x;
      VStack_5.y = pVVar4->y;
      VStack_5.z = pVVar4->z;
      fStack_8 = worldPos.x - VStack_5.x;
      fVar9 = worldPos.y - VStack_5.y;
      fStack_10 = worldPos.z - VStack_5.z;
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelHeight
                        (camera,(MethodInfo *)0x0);
      fStack_10 = (float)uVar7 * fVar9 + (float)uVar6 * fStack_8 + fVar2 * fStack_10;
      fVar2 = (float)iVar3 * _UNK_? * _UNK_?;
      fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                        (camera,(MethodInfo *)0x0);
      return fStack_10 / (fVar2 / fVar9);
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  fVar12 = (float10)(*pcVar11)();
  return (float)fVar12;
}


/* Single EstimateZoomFactorSpherical(Camera, Vector3) */

float Assembly-CSharp.dll::RTG::CameraEx::CameraEx_EstimateZoomFactorSpherical
                (Camera *camera,Vector3 worldPos,MethodInfo *method)

{
  if (camera != (Camera *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                      (camera,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographicSize
                        (camera,(MethodInfo *)0x0);
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelHeight
                        (camera,(MethodInfo *)0x0);
      return (fVar2 + fVar2) / ((float)iVar3 * _UNK_?);
    }
    this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)camera,(MethodInfo *)0x0);
    if (this != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                ((Vector3 *)&stack0xffffffe0,this,(MethodInfo *)0x0);
      fVar4 = (float10)func_?();
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelHeight
                        (camera,(MethodInfo *)0x0);
      fVar2 = (float)iVar3 * _UNK_? * _UNK_?;
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                        (camera,(MethodInfo *)0x0);
      return (float)fVar4 / (fVar2 / fVar5);
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  fVar4 = (float10)(*pcVar6)();
  return (float)fVar4;
}


/* Single GetFOVFromDistanceAndHeight(Camera, Single, Single) */

float Assembly-CSharp.dll::RTG::CameraEx::CameraEx_GetFOVFromDistanceAndHeight
                (Camera *camera,float frustumHeight,float distance,MethodInfo *method)

{
  fVar1 = (float10)func_?((double)distance);
  return ((float)fVar1 + (float)fVar1) * _UNK_?;
}


/* Vector3 GetFarMidOrthoTop(Camera) */

Vector3 * Assembly-CSharp.dll::RTG::CameraEx::CameraEx_GetFarMidOrthoTop
                    (Vector3 *__return_storage_ptr__,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__CameraEx);
  }
  pVVar1 = CameraEx_GetFarMidPoint(&VStack_2,camera,(MethodInfo *)0x0);
  uVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  if (camera != (Camera *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)camera,(MethodInfo *)0x0);
    if (this != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                         ((Vector3 *)&stack0xffffffd8,this,(MethodInfo *)0x0);
      VStack_2.x = pVVar1->x;
      VStack_2.y = pVVar1->y;
      VStack_2.z = pVVar1->z;
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographicSize
                        (camera,(MethodInfo *)0x0);
      __return_storage_ptr__->x = VStack_2.x * fVar5 + 0.0;
      __return_storage_ptr__->y = (float)uVar3 + VStack_2.y * fVar5;
      __return_storage_ptr__->z = fVar4 + VStack_2.z * fVar5;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar6)();
  return pVVar1;
}


/* Vector3 GetFarMidPoint(Camera) */

Vector3 * Assembly-CSharp.dll::RTG::CameraEx::CameraEx_GetFarMidPoint
                    (Vector3 *__return_storage_ptr__,Camera *camera,MethodInfo *method)

{
  if (camera != (Camera *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)camera,(MethodInfo *)0x0);
    if (this != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_2,this,(MethodInfo *)0x0);
      uStack_3._0_4_ = pVVar1->x;
      uStack_3._4_4_ = pVVar1->y;
      fStack_4 = pVVar1->z;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (&VStack_5,this,(MethodInfo *)0x0);
      VStack_2.x = pVVar1->x;
      VStack_2.y = pVVar1->y;
      VStack_2.z = pVVar1->z;
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                        (camera,(MethodInfo *)0x0);
      __return_storage_ptr__->x = (float)uStack_3 + VStack_2.x * fVar6;
      __return_storage_ptr__->y = uStack_3._4_4_ + VStack_2.y * fVar6;
      __return_storage_ptr__->z = fStack_4 + VStack_2.z * fVar6;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar7)();
  return pVVar1;
}


/* Single GetFrustumDistanceFromHeight(Camera, Single) */

float Assembly-CSharp.dll::RTG::CameraEx::CameraEx_GetFrustumDistanceFromHeight
                (Camera *camera,float frustumHeight,MethodInfo *method)

{
  if (camera != (Camera *)0x0) {
    fVar1 = frustumHeight * _UNK_?;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                      (camera,(MethodInfo *)0x0);
    dVar3 = (double)(fVar2 * _UNK_? * _UNK_?);
    func_?();
    return fVar1 / (float)dVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  fVar7 = (float10)(*pcVar6)();
  return (float)fVar7;
}


/* Single GetFrustumHeightFromDistance(Camera, Single) */

float Assembly-CSharp.dll::RTG::CameraEx::CameraEx_GetFrustumHeightFromDistance
                (Camera *camera,float distance,MethodInfo *method)

{
  if (camera != (Camera *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                      (camera,(MethodInfo *)0x0);
    dVar2 = (double)(fVar1 * _UNK_? * _UNK_?);
    func_?();
    return (float)dVar2 * (distance + distance);
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single GetFrustumWidthFromDistance(Camera, Single) */

float Assembly-CSharp.dll::RTG::CameraEx::CameraEx_GetFrustumWidthFromDistance
                (Camera *camera,float distance,MethodInfo *method)

{
  if (camera != (Camera *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                      (camera,(MethodInfo *)0x0);
    dVar2 = (double)(fVar1 * _UNK_? * _UNK_?);
    func_?();
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_aspect
                      (camera,(MethodInfo *)0x0);
    return (distance + distance) * (float)dVar2 * fVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Plane GetNearPlaneForward(Camera) */

Plane * Assembly-CSharp.dll::RTG::CameraEx::CameraEx_GetNearPlaneForward
                  (Plane *__return_storage_ptr__,Camera *camera,MethodInfo *method)

{
  if (camera != (Camera *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)camera,(MethodInfo *)0x0);
    if (this != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (&VStack_2,this,(MethodInfo *)0x0);
      uVar3 = (uint)pVVar1->x;
      fVar4 = pVVar1->z;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe0,this,(MethodInfo *)0x0);
      VStack_2.x = pVVar1->x;
      VStack_2.y = pVVar1->y;
      VStack_2.z = pVVar1->z;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (&VStack_5,this,(MethodInfo *)0x0);
      fVar6 = pVVar1->x;
      fVar7 = pVVar1->y;
      fVar8 = pVVar1->z;
      fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                         (camera,(MethodInfo *)0x0);
      fVar10 = VStack_2.x + fVar6 * fVar9;
      fVar7 = VStack_2.y + fVar7 * fVar9;
      fVar8 = VStack_2.z + fVar8 * fVar9;
      (__return_storage_ptr__->m_Normal).x = 0.0;
      (__return_storage_ptr__->m_Normal).y = 0.0;
      (__return_storage_ptr__->m_Normal).z = 0.0;
      __return_storage_ptr__->m_Distance = 0.0;
      VStack_2.z = (float)&UNK_?;
      value.y = 0.0;
      value.x = (float)uVar3;
      value.z = fVar4;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                         (&VStack_5,value,(MethodInfo *)0x0);
      uVar11 = pVVar1->x;
      uVar12 = pVVar1->y;
      fVar6 = pVVar1->z;
      (__return_storage_ptr__->m_Normal).x = (float)uVar11;
      (__return_storage_ptr__->m_Normal).y = (float)uVar12;
      (__return_storage_ptr__->m_Normal).z = fVar6;
      __return_storage_ptr__->m_Distance =
           (float)((uint)((float)uVar11 * fVar10 + (float)uVar12 * fVar7 + fVar6 * fVar8) ^
                  __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  pPVar14 = (Plane *)(*pcVar13)();
  return pPVar14;
}


/* Single GetOrthoFOV(Camera) */

float Assembly-CSharp.dll::RTG::CameraEx::CameraEx_GetOrthoFOV(Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  if (camera != (Camera *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)camera,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_3,pTVar1,(MethodInfo *)0x0);
      uVar4 = pVVar2->x;
      uVar5 = pVVar2->y;
      VStack_6.z = pVVar2->z;
      VStack_6.x = (float)uVar4;
      VStack_6.y = (float)uVar5;
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__CameraEx);
      }
      pVVar2 = CameraEx_GetFarMidPoint(&VStack_7,camera,(MethodInfo *)0x0);
      VStack_7.x = pVVar2->x;
      VStack_7.y = pVVar2->y;
      VStack_7.z = pVVar2->z;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__RTG__CameraEx);
        cRam_? = '\x01';
      }
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__CameraEx);
      }
      pVVar2 = CameraEx_GetFarMidPoint(&VStack_6,camera,(MethodInfo *)0x0);
      uVar8 = pVVar2->x;
      uVar9 = pVVar2->y;
      VStack_6.y = pVVar2->z;
      fStack_10 = (float)uVar8;
      VStack_6.x = (float)uVar9;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)camera,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                            (&VStack_11,pTVar1,(MethodInfo *)0x0);
        uVar12 = pVVar2->x;
        uVar13 = pVVar2->y;
        VStack_3.x = pVVar2->z;
        VStack_6.y = (float)uVar12;
        VStack_6.z = (float)uVar13;
        fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographicSize
                           (camera,(MethodInfo *)0x0);
        fVar15 = (fStack_16 + VStack_3.x * fVar14) - VStack_6.x;
        VStack_7.z = (fStack_17 + VStack_3.y * fVar14) - VStack_6.y;
        fStack_18 = (fStack_19 + VStack_3.z * fVar14) - VStack_6.z;
        VStack_7.x = fVar15;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Math);
          cRam_? = '\x01';
        }
        fStack_10 = fStack_20 * fStack_20 + VStack_7.y * VStack_7.y + fStack_21 * fStack_21;
        fStack_22 = VStack_7.x * VStack_7.x + VStack_7.z * VStack_7.z + fStack_18 * fStack_18;
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        pMVar23 = TypeInfo__System__Math;
        dVar24 = (double)(fStack_22 * fStack_10);
        if (dVar24 < 0.0) {
          func_?();
        }
        else {
          dVar24 = SQRT(dVar24);
        }
        if (_UNK_? <= (float)dVar24) {
          fStack_20 = (fStack_20 * VStack_7.x + VStack_7.y * VStack_7.z + fStack_21 * fStack_18)
                      / (float)dVar24;
          fVar15 = _UNK_?;
          if ((fStack_20 < _UNK_?) || (fVar15 = _UNK_?, _UNK_? < fStack_20)) {
            fStack_20 = fVar15;
          }
          if ((pMVar23->_1).cctor_finished_or_no_cctor == 0) {
            func_?(pMVar23);
          }
          dVar24 = (double)fStack_20;
          func_?();
          return (float)dVar24 * _UNK_? + (float)dVar24 * _UNK_?;
        }
        return 0.0;
      }
    }
  }
  func_?();
  pcVar25 = (code *)swi(3);
  fVar26 = (float10)(*pcVar25)();
  return (float)fVar26;
}


/* Single GetPointZDistance(Camera, Vector3) */

float Assembly-CSharp.dll::RTG::CameraEx::CameraEx_GetPointZDistance
                (Camera *camera,Vector3 point,MethodInfo *method)

{
  if (camera != (Camera *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)camera,(MethodInfo *)0x0);
    if (this != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffdc,this,(MethodInfo *)0x0);
      uVar2 = pVVar1->x;
      uVar3 = pVVar1->y;
      fVar4 = pVVar1->z;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         ((Vector3 *)&stack0xffffffdc,this,(MethodInfo *)0x0);
      uVar5 = pVVar1->x;
      uVar6 = pVVar1->y;
      return (float)uVar5 * (point.x - (float)uVar2) + (float)uVar6 * (point.y - (float)uVar3) +
             pVVar1->z * (point.z - fVar4);
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  fVar8 = (float10)(*pcVar7)();
  return (float)fVar8;
}


/* Void GetVisibleObjects(Camera, CameraViewVolume, List`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::RTG::CameraEx::CameraEx_GetVisibleObjects
               (Camera *camera,CameraViewVolume *viewVolume,
               List_1_UnityEngine_GameObject_ *visibleObjects,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff78;
  puVar5 = &stack0xffffff78;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                   );
    func_?(&TypeInfo__RTG__GameObjectTypeHelper);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    func_?(&TypeInfo__RTG__ObjectBounds);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if (visibleObjects != (List_1_UnityEngine_GameObject_ *)0x0) {
    length = (visibleObjects->fields)._size;
    piVar7 = &(visibleObjects->fields)._version;
    *piVar7 = *piVar7 + 1;
    (visibleObjects->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(visibleObjects->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    }
    this_00 = (RTScene *)
              MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                        (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    if (viewVolume != (CameraViewVolume *)0x0) {
      puStack_8 = (undefined *)(viewVolume->fields)._worldOBB._size.x;
      fVar9 = (viewVolume->fields)._worldOBB._size.y;
      fVar10 = (viewVolume->fields)._worldOBB._size.z;
      uVar11._0_4_ = (viewVolume->fields)._worldOBB._size.y;
      uVar11._4_4_ = (viewVolume->fields)._worldOBB._size.z;
      fVar12 = (viewVolume->fields)._worldOBB._center.x;
      LStack_13._list =
           (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (viewVolume->fields)._worldOBB._center.y;
      pfVar14 = &(viewVolume->fields)._worldOBB._center.z;
      LStack_13._4_8_ = *(undefined8 *)pfVar14;
      LStack_13._current = (RegexCharClass_SingleRange)(viewVolume->fields)._worldOBB._rotation.y;
      VStack_15.y = (viewVolume->fields)._worldOBB._rotation.z;
      VStack_15.z = (viewVolume->fields)._worldOBB._rotation.w;
      fVar16 = *pfVar14;
      fVar17 = (viewVolume->fields)._worldOBB._rotation.x;
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__CameraEx);
        fVar9 = (float)uVar11;
        fVar10 = (float)((ulonglong)uVar11 >> 0x20);
        fVar16 = (float)LStack_13._index;
        fVar17 = (float)LStack_13._version;
      }
      if (this_00 != (RTScene *)0x0) {
        obb._size.y = fVar9;
        obb._size.x = (float)puStack_8;
        obb._size.z = fVar10;
        obb._center.x = fVar12;
        obb._center.y = (float)LStack_13._list;
        obb._center.z = fVar16;
        obb._rotation.x = fVar17;
        obb._rotation.y = (float)LStack_13._current;
        obb._rotation.z = VStack_15.y;
        obb._rotation.w = VStack_15.z;
        obb._isValid = (viewVolume->fields)._worldOBB._isValid;
        obb._41_3_ = *(undefined3 *)&(viewVolume->fields)._worldOBB.field_0x29;
        RTScene::RTScene_OverlapBox
                  (this_00,obb,TypeInfo__RTG__CameraEx->static_fields->_objectBuffer,
                   (MethodInfo *)0x0);
        pLVar18 = TypeInfo__RTG__CameraEx->static_fields->_objectBuffer;
        if (pLVar18 != (List_1_UnityEngine_GameObject_ *)0x0) {
          if ((pLVar18->fields)._size != 0) {
            puStack_8 = (undefined *)0x0;
            if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
              LStack_13._list =
                   (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   TypeInfo__RTG__GameObjectTypeHelper;
              func_?();
            }
            if (cRam_? == '\0') {
              func_?(&TypeInfo__RTG__GameObjectTypeHelper);
              cRam_? = '\x01';
            }
            if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__RTG__GameObjectTypeHelper);
            }
            puStack_8 = (undefined *)
                         TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined;
            pVVar19 = Vector3Ex::Vector3Ex_FromValue(&VStack_15,1e-05,(MethodInfo *)0x0);
            uVar20._0_4_ = pVVar19->x;
            uVar20._4_4_ = pVVar19->y;
            pMVar21 = (MethodInfo *)pVVar19->z;
            if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__RTG__CameraEx);
            }
            this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   TypeInfo__RTG__CameraEx->static_fields->_objectBuffer;
            if (this == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            goto code_?;
            pLVar22 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                               (&LStack_13,this,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                               );
            VStack_15._4_8_ = ZEXT48(&LStack_6) << 0x20;
            LStack_6._list = (List_1_System_Object_ *)pLVar22->_list;
            LStack_6._index = pLVar22->_index;
            LStack_6._version = pLVar22->_version;
            LStack_6._current = *(Object **)&pLVar22->_current;
            uStack_1 = 1;
            while( true ) {
              bVar23 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                (&LStack_6,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                                );
              gameObject = LStack_6._current;
              if (bVar23 == 0) break;
              if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              queryConfig.NoVolumeSize.x = (float)(int)uVar20;
              queryConfig.ObjectTypes = (int32_t)puStack_8;
              queryConfig.NoVolumeSize.y = (float)(int)((ulonglong)uVar20 >> 0x20);
              queryConfig.NoVolumeSize.z = (float)pMVar21;
              pAVar24 = ObjectBounds::ObjectBounds_CalcWorldAABB
                                 ((AABB *)&stack0xffffff84,(GameObject *)gameObject,queryConfig,
                                  (MethodInfo *)0x0);
              LStack_13._list =
                   (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (pAVar24->_center).x;
              LStack_13._current = *(RegexCharClass_SingleRange *)&pAVar24->_isValid;
              LStack_13._index = (int32_t)(pAVar24->_center).y;
              LStack_13._version = (int32_t)(pAVar24->_center).z;
              if ((char)LStack_13._current.First != '\0') {
                in_stack_25 = (MethodInfo *)(pAVar24->_size).y;
                bVar23 = CameraViewVolume::CameraViewVolume_CheckAABB
                                  (viewVolume,*pAVar24,(MethodInfo *)0x0);
                if (bVar23 != 0) {
                  uVar20 = CONCAT44(gameObject,visibleObjects);
                  pMVar21 = 
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                  ;
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Add
                            ((List_1_System_Object_ *)visibleObjects,gameObject,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                            );
                }
              }
            }
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&LStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                       ,in_stack_25);
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
  }
code_?:
  uVar26 = func_?();
  func_?(uVar26);
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* List`1[UnityEngine.Vector3] GetVisibleSphereExtents(Camera, Sphere) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::CameraEx::CameraEx_GetVisibleSphereExtents
          (Camera *camera,Sphere sphere,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                   );
    cRam_? = '\x01';
  }
  if (camera != (Camera *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)camera,(MethodInfo *)0x0);
    if (this != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                         (&VStack_2,this,(MethodInfo *)0x0);
      uStack_3._0_4_ = pVVar1->x;
      uStack_3._4_4_ = pVVar1->y;
      fVar4 = pVVar1->z;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                         (&VStack_2,this,(MethodInfo *)0x0);
      right.z = fVar4;
      right.x = (float)(undefined4)uStack_3;
      right.y = uStack_3._4_4_;
      this_00 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                Sphere::Sphere_GetRightUpExtents(&sphere,right,*pVVar1,(MethodInfo *)0x0);
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                        (camera,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        camera = (Camera *)0x0;
        do {
          fVar4 = sphere._center.z;
          fVar6 = sphere._center.x;
          fVar7 = sphere._center.y;
          pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffff9c,this,(MethodInfo *)0x0);
          uVar8 = pVVar1->x;
          uVar9 = pVVar1->y;
          point0.y = (float)uVar9;
          point0.x = (float)uVar8;
          uStack_3 = CONCAT44(pVVar1->z,(undefined4)uStack_3);
          if (this_00 == (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) goto code_?;
          pVVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   VisualTreeAsset+UsingEntry]::
                   List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                             ((VisualTreeAsset_UsingEntry *)&pSStack_11,
                              (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,
                              (int32_t)camera,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                             );
          point.y = fVar7;
          point.x = fVar6;
          point.z = fVar4;
          point0.z = uStack_3._4_4_;
          pVVar1 = Vector3Ex::Vector3Ex_ProjectOnSegment
                             ((Vector3 *)&stack0xffffff84,point,point0,(Vector3)*pVVar10,
                              (MethodInfo *)0x0);
          uStack_12 = CONCAT44(sphere._center.y,sphere._center.x);
          uStack_13._0_4_ = pVVar1->x;
          uStack_13._4_4_ = pVVar1->y;
          fStack_14 = pVVar1->z;
          fStack_15 = sphere._center.z;
          value.y = (float)uStack_13._4_4_ - sphere._center.y;
          value.x = (float)(undefined4)uStack_13 - sphere._center.x;
          value.z = fStack_14 - sphere._center.z;
          pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                             ((Vector3 *)&stack0xffffff78,value,(MethodInfo *)0x0);
          uStack_16._0_4_ = pVVar1->x;
          uStack_16._4_4_ = pVVar1->y;
          fStack_17 = pVVar1->z;
          VStack_2.z = fStack_15 + sphere._radius * fStack_17;
          value_00.FirstAxisSign =
               (int32_t)(uStack_12._4_4_ + sphere._radius * (float)uStack_16._4_4_);
          value_00.Quadrant =
               (int32_t)((float)uStack_12 + sphere._radius * (float)(undefined4)uStack_16);
          value_00.SecondAxisSign = (int32_t)VStack_2.z;
          mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
                    (this_00,(int32_t)camera,value_00,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                    );
          camera = (Camera *)((int)&camera->klass + 1);
        } while ((int)camera < 4);
      }
      return (List_1_UnityEngine_Vector3_ *)this_00;
    }
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  pLVar19 = (List_1_UnityEngine_Vector3_ *)(*pcVar18)();
  return pLVar19;
}


/* Boolean IsCurrent(Camera) */

bool Assembly-CSharp.dll::RTG::CameraEx::CameraEx_IsCurrent(Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_current((MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)camera,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean IsPointFacingCamera(Camera, Vector3, Vector3) */

bool Assembly-CSharp.dll::RTG::CameraEx::CameraEx_IsPointFacingCamera
               (Camera *camera,Vector3 point,Vector3 pointNormal,MethodInfo *method)

{
  if (camera != (Camera *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)camera,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
      uVar3 = pVVar2->x;
      uVar4 = pVVar2->y;
      point.x = point.x - (float)uVar3;
      point.y = point.y - (float)uVar4;
      point.z = point.z - pVVar2->z;
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                        (camera,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)camera,(MethodInfo *)0x0);
        if (pTVar1 == (Transform *)0x0) goto code_?;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                           ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
        uVar6 = pVVar2->x;
        uVar7 = pVVar2->y;
        point.z = pVVar2->z;
        point.x = (float)uVar6;
        point.y = (float)uVar7;
      }
      return pointNormal.y * point.y + pointNormal.x * point.x + pointNormal.z * point.z < 0.0;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  bVar5 = (*pcVar8)();
  return bVar5;
}


/* Boolean IsPointInFrontNearPlane(Camera, Vector3) */

bool Assembly-CSharp.dll::RTG::CameraEx::CameraEx_IsPointInFrontNearPlane
               (Camera *camera,Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__CameraEx);
  }
  if (camera != (Camera *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)camera,(MethodInfo *)0x0);
    if (this != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         ((Vector3 *)&stack0xffffffc0,this,(MethodInfo *)0x0);
      uStack_2._0_4_ = pVVar1->x;
      uStack_2._4_4_ = pVVar1->y;
      fVar3 = pVVar1->z;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_4,this,(MethodInfo *)0x0);
      fVar5 = pVVar1->x;
      fVar6 = pVVar1->y;
      fVar7 = pVVar1->z;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (&VStack_8,this,(MethodInfo *)0x0);
      VStack_9.x = pVVar1->x;
      VStack_9.y = pVVar1->y;
      VStack_9.z = pVVar1->z;
      fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                         (camera,(MethodInfo *)0x0);
      fVar11 = VStack_9.x * fVar10;
      fStack_12 = fVar6 + VStack_9.y * fVar10;
      fStack_13 = fVar7 + VStack_9.z * fVar10;
      VStack_4.z = (float)&UNK_?;
      value.z = fVar3;
      value.x = (float)(undefined4)uStack_2;
      value.y = (float)uStack_2._4_4_;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                         (&VStack_9,value,(MethodInfo *)0x0);
      uVar14 = pVVar1->x;
      uVar15 = pVVar1->y;
      return _UNK_? <
             (float)uVar14 * position.x + (float)uVar15 * position.y + pVVar1->z * position.z +
             (float)((uint)((float)uVar14 * (fVar5 + fVar11) + (float)uVar15 * fStack_12 +
                           pVVar1->z * fStack_13) ^
                    __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  bVar17 = (*pcVar16)();
  return bVar17;
}


/* Single ScreenToEstimatedWorldSize(Camera, Vector3, Single) */

float Assembly-CSharp.dll::RTG::CameraEx::CameraEx_ScreenToEstimatedWorldSize
                (Camera *camera,Vector3 worldPos,float screenSize,MethodInfo *method)

{
  if (camera != (Camera *)0x0) {
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelHeight
                      (camera,(MethodInfo *)0x0);
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                      (camera,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographicSize
                        (camera,(MethodInfo *)0x0);
      return ((fVar3 + fVar3) / (float)iVar1) * screenSize;
    }
    this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)camera,(MethodInfo *)0x0);
    if (this != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (&VStack_5,this,(MethodInfo *)0x0);
      method_00 = pVVar4->x;
      uVar6 = pVVar4->y;
      fVar3 = pVVar4->z;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffd0,this,(MethodInfo *)method_00);
      VStack_5.x = pVVar4->x;
      VStack_5.y = pVVar4->y;
      VStack_5.z = pVVar4->z;
      fStack_7 = (float)method_00 * (worldPos.x - VStack_5.x) +
                 (float)uVar6 * (worldPos.y - VStack_5.y) + fVar3 * (worldPos.z - VStack_5.z);
      fStack_8 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                           (camera,(MethodInfo *)0x0);
      dVar9 = (double)(fStack_8 * _UNK_? * _UNK_?);
      func_?();
      return (((float)dVar9 * (fStack_7 + fStack_7)) / (float)iVar1) * screenSize;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  fVar11 = (float10)(*pcVar10)();
  return (float)fVar11;
}


/* CameraEx() */

void Assembly-CSharp.dll::RTG::CameraEx::CameraEx__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_GameObject_ *)
         func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  TypeInfo__RTG__CameraEx->static_fields->_objectBuffer = this;
  func_?(TypeInfo__RTG__CameraEx->static_fields,this);
  return;
}

