
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
    fVar2 = fVar2 * fVar1 * _UNK_? * (float)dVar3;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                       (camera,(MethodInfo *)0x0);
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                       (camera,(MethodInfo *)0x0);
    dVar3 = (double)(fVar4 * _UNK_? * _UNK_?);
    func_?();
    fVar1 = (float)dVar3 * fVar1 * _UNK_?;
    if (this != (Transform *)0x0) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_6,this,(MethodInfo *)0x0);
      IStack_7.klass = (IEnumerable_1_UnityEngine_Vector3___Class *)pVVar5->x;
      IStack_7.monitor = (MonitorData *)pVVar5->y;
      pIStack_8 = (IEnumerable_1_UnityEngine_Vector3___Class *)pVVar5->z;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (&VStack_6,this,(MethodInfo *)0x0);
      uVar9._0_4_ = pVVar5->x;
      uVar9._4_4_ = pVVar5->y;
      fVar4 = pVVar5->z;
      fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                         (camera,(MethodInfo *)0x0);
      fVar11 = (float)IStack_7.klass + (float)uVar9 * fVar10;
      fVar12 = (float)IStack_7.monitor + (float)((ulonglong)uVar9 >> 0x20) * fVar10;
      fVar4 = (float)pIStack_8 + fVar4 * fVar10;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                         (&VStack_6,this,(MethodInfo *)0x0);
      IStack_7.klass = (IEnumerable_1_UnityEngine_Vector3___Class *)pVVar5->x;
      IStack_7.monitor = (MonitorData *)pVVar5->y;
      pIStack_8 = (IEnumerable_1_UnityEngine_Vector3___Class *)pVVar5->z;
      fVar13 = (float)IStack_7.klass * fVar2 * _UNK_?;
      fVar10 = (float)IStack_7.monitor * fVar2 * _UNK_?;
      fVar14 = (float)pIStack_8 * fVar2 * _UNK_?;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                         (&VStack_6,this,(MethodInfo *)0x0);
      IStack_7.klass = (IEnumerable_1_UnityEngine_Vector3___Class *)pVVar5->x;
      IStack_7.monitor = (MonitorData *)pVVar5->y;
      pIStack_8 = (IEnumerable_1_UnityEngine_Vector3___Class *)pVVar5->z;
      fVar12 = (float)IStack_7.monitor * fVar1 * _UNK_? + (fVar12 - fVar10);
      fVar11 = (float)IStack_7.klass * fVar1 * _UNK_? + (fVar11 - fVar13);
      fVar4 = (float)pIStack_8 * fVar1 * _UNK_? + (fVar4 - fVar14);
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                         (&VStack_6,this,(MethodInfo *)0x0);
      IStack_7.klass = (IEnumerable_1_UnityEngine_Vector3___Class *)pVVar5->x;
      IStack_7.monitor = (MonitorData *)pVVar5->y;
      pIStack_15 = (IEnumerable_1_UnityEngine_Vector3___Class *)
                   ((float)IStack_7.klass * fVar2 + fVar11);
      pMStack_16 = (MonitorData *)((float)IStack_7.monitor * fVar2 + fVar12);
      pIStack_17 = (IEnumerable_1_UnityEngine_Vector3___Class *)(pVVar5->z * fVar2 + fVar4);
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                         (&VStack_6,this,(MethodInfo *)0x0);
      IStack_7.klass = (IEnumerable_1_UnityEngine_Vector3___Class *)pVVar5->x;
      IStack_7.monitor = (MonitorData *)pVVar5->y;
      fVar11 = fVar11 - (float)IStack_7.klass * fVar1;
      fVar12 = fVar12 - (float)IStack_7.monitor * fVar1;
      pMVar18 = (MonitorData *)(fVar4 - pVVar5->z * fVar1);
      VStack_6.x = fVar11;
      VStack_6.y = fVar12;
      VStack_6.z = (float)pMVar18;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                         ((Vector3 *)&stack0xffffffac,this,(MethodInfo *)0x0);
      uVar19 = pVVar5->x;
      uVar20 = pVVar5->y;
      pIStack_8 = (IEnumerable_1_UnityEngine_Vector3___Class *)
                   (pVVar5->z * fVar2 + (float)pMVar18);
      IStack_7.monitor = (MonitorData *)((float)uVar20 * fVar2 + fVar12);
      IStack_7.klass = (IEnumerable_1_UnityEngine_Vector3___Class *)((float)uVar19 * fVar2 + fVar11)
      ;
      pMVar18 = (MonitorData *)0x5;
      uVar9 = CONCAT44(TypeInfo__UnityEngine__Vector3,&UNK_?);
      pointCloud = (IEnumerable_1_UnityEngine_Vector3_ *)func_?();
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffac,this,(MethodInfo *)0x0);
      if (pointCloud != (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
        fVar1 = pVVar5->y;
        pIVar21 = (IEnumerable_1_UnityEngine_Vector3___Class *)pVVar5->z;
        if (pointCloud[1].monitor != (MonitorData *)0x0) {
          pointCloud[2].klass = (IEnumerable_1_UnityEngine_Vector3___Class *)pVVar5->x;
          pointCloud[2].monitor = (MonitorData *)fVar1;
          pointCloud[3].klass = pIVar21;
          if ((MonitorData *)0x1 < pointCloud[1].monitor) {
            *(undefined8 *)&pointCloud[3].monitor = uVar9;
            pointCloud[4].monitor = pMVar18;
            if ((MonitorData *)0x2 < pointCloud[1].monitor) {
              IVar22.monitor = pMStack_16;
              IVar22.klass = pIStack_15;
              pointCloud[5] = IVar22;
              pointCloud[6].klass = pIStack_17;
              if ((MonitorData *)0x3 < pointCloud[1].monitor) {
                *(ulonglong *)&pointCloud[6].monitor = CONCAT44(VStack_6.y,VStack_6.x);
                pointCloud[7].monitor = (MonitorData *)VStack_6.z;
                if ((MonitorData *)0x4 < pointCloud[1].monitor) {
                  pointCloud[8] = IStack_7;
                  pointCloud[9].klass = pIStack_8;
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
  pcVar23 = (code *)swi(3);
  pAVar24 = (AABB *)(*pcVar23)();
  return pAVar24;
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
    this = (FieldInfo *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)camera,(MethodInfo *)0x0);
    if (this != (FieldInfo *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffff88,(Transform *)this,(MethodInfo *)0x0);
      uVar4 = pVVar3->x;
      uVar5 = pVVar3->y;
      fVar6 = pVVar3->z;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          ((Vector3 *)&stack0xffffff88,(Transform *)this,(MethodInfo *)0x0);
      uVar7 = pVVar3->x;
      uVar8 = pVVar3->y;
      fVar9 = pVVar3->z;
      fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                         (camera,(MethodInfo *)0x0);
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          ((Vector3 *)&stack0xffffff88,(Transform *)this,(MethodInfo *)0x0);
      uVar11 = pVVar3->x;
      uVar12 = pVVar3->y;
      fVar13 = (float)uVar11 * fVar2 * _UNK_?;
      fVar14 = (float)uVar12 * fVar2 * _UNK_?;
      fVar15 = pVVar3->z * fVar2 * _UNK_?;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          ((Vector3 *)&stack0xffffff88,(Transform *)this,(MethodInfo *)0x0);
      uVar16 = pVVar3->x;
      uVar17 = pVVar3->y;
      fVar18 = (float)uVar16 * fVar1 * _UNK_?;
      fVar19 = (float)uVar17 * fVar1 * _UNK_?;
      fVar20 = pVVar3->z * fVar1 * _UNK_?;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          ((Vector3 *)&stack0xffffff88,(Transform *)this,(MethodInfo *)0x0);
      uVar21 = pVVar3->x;
      uVar22 = pVVar3->y;
      fVar23 = pVVar3->z;
      fVar18 = (float)uVar21 * fVar2 + fVar18 + ((fVar10 * (float)uVar7 + (float)uVar4) - fVar13);
      fVar19 = (float)uVar22 * fVar2 + fVar19 + ((fVar10 * (float)uVar8 + (float)uVar5) - fVar14)
      ;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          ((Vector3 *)&stack0xffffff88,(Transform *)this,(MethodInfo *)0x0);
      uVar24 = pVVar3->x;
      uVar25 = pVVar3->y;
      pIVar26 = (IEnumerable_1_UnityEngine_Vector3___Class *)(fVar18 - (float)uVar24 * fVar1);
      pMVar27 = (MonitorData *)(fVar19 - (float)uVar25 * fVar1);
      pIVar28 = (IEnumerable_1_UnityEngine_Vector3___Class *)
                ((fVar23 * fVar2 + fVar20 + ((fVar10 * fVar9 + fVar6) - fVar15)) -
                pVVar3->z * fVar1);
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          ((Vector3 *)&stack0xffffff88,(Transform *)this,(MethodInfo *)0x0);
      uVar29 = pVVar3->x;
      uVar30 = pVVar3->y;
      fVar6 = pVVar3->z;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffff88,(Transform *)this,(MethodInfo *)0x0);
      uVar31 = pVVar3->x;
      uVar32 = pVVar3->y;
      fVar9 = pVVar3->z;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          ((Vector3 *)&stack0xffffff88,(Transform *)this,(MethodInfo *)0x0);
      uVar33 = pVVar3->x;
      uVar34 = pVVar3->y;
      fVar23 = pVVar3->z;
      fVar20 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                         (camera,(MethodInfo *)0x0);
      pIVar35 = (IEnumerable_1_UnityEngine_Vector3___Class *)0x0;
      __return_storage_ptr___00 = (Il2CppClass *)&stack0xffffff88;
      pFVar36 = this;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          ((Vector3 *)__return_storage_ptr___00,(Transform *)this,(MethodInfo *)0x0)
      ;
      uVar37 = pVVar3->x;
      uVar38 = pVVar3->y;
      fVar14 = (float)uVar37 * fVar2 * _UNK_?;
      fVar15 = (float)uVar38 * fVar2 * _UNK_?;
      fVar13 = pVVar3->z * fVar2 * _UNK_?;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          ((Vector3 *)&stack0xffffff88,(Transform *)this,(MethodInfo *)0x0);
      uVar39 = pVVar3->x;
      uVar40 = pVVar3->y;
      IStack_41.klass =
           (IEnumerable_1_UnityEngine_Vector3___Class *)
           ((float)uVar39 * fVar1 * _UNK_? +
           ((fVar20 * (float)uVar33 + (float)uVar31) - fVar14));
      IStack_41.monitor =
           (MonitorData *)
           ((float)uVar40 * fVar1 * _UNK_? +
           ((fVar20 * (float)uVar34 + (float)uVar32) - fVar15));
      pIVar42 = (IEnumerable_1_UnityEngine_Vector3___Class *)
                (pVVar3->z * fVar1 * _UNK_? + ((fVar20 * fVar23 + fVar9) - fVar13));
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          ((Vector3 *)&stack0xffffff88,(Transform *)this,(MethodInfo *)0x0);
      uVar43 = pVVar3->x;
      uVar44 = pVVar3->y;
      fVar9 = (float)uVar44 * (float)&stack0xffffff88 + (float)IStack_41.monitor;
      pMVar45 = (MonitorData *)(pVVar3->z * (float)&stack0xffffff88 + (float)pIVar42);
      fVar23 = (float)IStack_41.klass + (float)uVar43 * (float)&stack0xffffff88;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          ((Vector3 *)&stack0xffffff88,(Transform *)this,(MethodInfo *)0x0);
      uVar46 = pVVar3->x;
      uVar47 = pVVar3->y;
      pIVar48 = (IEnumerable_1_UnityEngine_Vector3___Class *)(fVar23 - (float)uVar46 * fVar1);
      pMVar49 = (MonitorData *)(fVar9 - (float)uVar47 * fVar1);
      pIVar50 = (IEnumerable_1_UnityEngine_Vector3___Class *)((float)pMVar45 - pVVar3->z * fVar1);
      pIVar51 = pIVar48;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          ((Vector3 *)&puStack_52,(Transform *)this,(MethodInfo *)0x0);
      uVar53 = pVVar3->x;
      uVar54 = pVVar3->y;
      fVar1 = pVVar3->z;
      ppMStack_55 = (MethodInfo **)((float)pMVar49 - (float)uVar54 * (float)&puStack_52);
      pPStack_56 = (PropertyInfo *)((float)pIVar48 - (float)uVar53 * (float)&puStack_52);
      pointCloud = (IEnumerable_1_UnityEngine_Vector3_ *)func_?();
      if (pointCloud != (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
        if (pointCloud[1].monitor != (MonitorData *)0x0) {
          IVar57.monitor = (MonitorData *)pFVar36;
          IVar57.klass = (IEnumerable_1_UnityEngine_Vector3___Class *)__return_storage_ptr___00;
          pointCloud[2] = IVar57;
          pointCloud[3].klass = pIVar35;
          if ((MonitorData *)0x1 < pointCloud[1].monitor) {
            *(ulonglong *)&pointCloud[3].monitor = CONCAT44(fVar19,fVar18);
            pointCloud[4].monitor = (MonitorData *)&UNK_?;
            if ((MonitorData *)0x2 < pointCloud[1].monitor) {
              IVar58.monitor = pMVar27;
              IVar58.klass = pIVar26;
              pointCloud[5] = IVar58;
              pointCloud[6].klass = pIVar28;
              if ((MonitorData *)0x3 < pointCloud[1].monitor) {
                *(ulonglong *)&pointCloud[6].monitor =
                     CONCAT44((float)pMVar27 - (float)uVar30 * fVar2,
                              (float)pIVar26 - (float)uVar29 * fVar2);
                pointCloud[7].monitor = (MonitorData *)((float)pIVar28 - fVar6 * fVar2);
                if ((MonitorData *)0x4 < pointCloud[1].monitor) {
                  pointCloud[8] = IStack_41;
                  pointCloud[9].klass = pIVar42;
                  if ((MonitorData *)0x5 < pointCloud[1].monitor) {
                    *(ulonglong *)&pointCloud[9].monitor = CONCAT44(fVar9,fVar23);
                    pointCloud[10].monitor = pMVar45;
                    if ((MonitorData *)0x6 < pointCloud[1].monitor) {
                      IVar59.monitor = pMVar49;
                      IVar59.klass = pIVar51;
                      pointCloud[0xb] = IVar59;
                      pointCloud[0xc].klass = pIVar50;
                      if ((MonitorData *)0x7 < pointCloud[1].monitor) {
                        *(undefined8 *)&pointCloud[0xc].monitor = _pPStack_30;
                        pointCloud[0xd].monitor =
                             (MonitorData *)((float)pIVar50 - fVar1 * (float)&puStack_52);
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
  pcVar60 = (code *)swi(3);
  pAVar61 = (AABB *)(*pcVar60)();
  return pAVar61;
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
  if (worldPoints != (List_1_UnityEngine_Vector3_ *)0x0) {
    capacity = (worldPoints->fields)._size;
    if (capacity == 0) {
      pLVar7 = (List_1_UnityEngine_Vector2_ *)
                func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar7,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
      *unaff_FS_OFFSET = uStack_3;
      return pLVar7;
    }
    this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
              (this,capacity,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
    pLStack_8 = this;
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
              VisualTreeAsset+UsingEntry]::
              List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__GetEnumerator
                        (&LStack_10,
                         (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)worldPoints,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                        );
    uStack_11 = 0;
    LStack_12._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar9->_list;
    LStack_12._index = pLVar9->_index;
    LStack_12._version = pLVar9->_version;
    LStack_12._current.Quadrant = (int32_t)(pLVar9->_current).alias;
    uVar13 = (pLVar9->_current).path;
    uVar14 = (pLVar9->_current).asset;
    uStack_1 = 1;
    LStack_12._current.FirstAxisSign = uVar13;
    LStack_12._current.SecondAxisSign = uVar14;
    pLStack_15 = &LStack_12;
    while( true ) {
      while( true ) {
        bVar16 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[RTG::
                PlaneIdHelper+PlaneQuadrantInfo]::
                List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo__MoveNext
                          (&LStack_12,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                          );
        if (bVar16 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_12,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                     ,(MethodInfo *)in_stack_6);
          *unaff_FS_OFFSET = uStack_3;
          return (List_1_UnityEngine_Vector2_ *)this;
        }
        if (camera == (Camera *)0x0) goto code_?;
        position.y = (float)LStack_12._current.FirstAxisSign;
        position.x = (float)LStack_12._current.Quadrant;
        position.z = (float)LStack_12._current.SecondAxisSign;
        pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                            ((Vector3 *)&LStack_10._current,camera,position,(MethodInfo *)0x0);
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
  pLVar7 = (List_1_UnityEngine_Vector2_ *)(*pcVar26)();
  return pLVar7;
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
      fVar2 = fVar2 * _UNK_?;
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelHeight
                        (camera,(MethodInfo *)0x0);
      return fVar2 / ((float)iVar3 * _UNK_?);
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
      fVar2 = fVar2 * _UNK_?;
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelHeight
                        (camera,(MethodInfo *)0x0);
      return fVar2 / ((float)iVar3 * _UNK_?);
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
           (float)((uint)((float)uVar12 * fVar7 + (float)uVar11 * fVar10 + fVar6 * fVar8) ^
                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
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
        fVar17 = (fStack_18 + VStack_3.y * fVar14) - VStack_6.y;
        fStack_19 = (fStack_20 + VStack_3.z * fVar14) - VStack_6.z;
        VStack_7.y = fVar17;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Math);
          cRam_? = '\x01';
        }
        fStack_10 = VStack_7.x * VStack_7.x + VStack_7.z * VStack_7.z + fStack_21 * fStack_21;
        fStack_22 = VStack_7.y * VStack_7.y + fVar15 * fVar15 + fStack_19 * fStack_19;
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
          fStack_25 = (fVar15 * VStack_7.x + VStack_7.y * VStack_7.z + fStack_19 * fStack_21) /
                      (float)dVar24;
          fVar17 = _UNK_?;
          if ((fStack_25 < _UNK_?) || (fVar17 = _UNK_?, _UNK_? < fStack_25)) {
            fStack_25 = fVar17;
          }
          if ((pMVar23->_1).cctor_finished_or_no_cctor == 0) {
            func_?(pMVar23);
          }
          dVar24 = (double)fStack_25;
          func_?();
          return (float)dVar24 * _UNK_? + (float)dVar24 * _UNK_?;
        }
        return 0.0;
      }
    }
  }
  func_?();
  pcVar26 = (code *)swi(3);
  fVar27 = (float10)(*pcVar26)();
  return (float)fVar27;
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
      return (float)uVar6 * (point.y - (float)uVar3) + (float)uVar5 * (point.x - (float)uVar2) +
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
  if (visibleObjects != (List_1_UnityEngine_GameObject_ *)0x0) {
    length = (visibleObjects->fields)._size;
    piVar6 = &(visibleObjects->fields)._version;
    *piVar6 = *piVar6 + 1;
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
      puStack_7 = (undefined *)(viewVolume->fields)._worldOBB._size.x;
      fVar8 = (viewVolume->fields)._worldOBB._size.y;
      fVar9 = (viewVolume->fields)._worldOBB._size.z;
      uVar10._0_4_ = (viewVolume->fields)._worldOBB._size.y;
      uVar10._4_4_ = (viewVolume->fields)._worldOBB._size.z;
      fVar11 = (viewVolume->fields)._worldOBB._center.x;
      LStack_12._list =
           (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (viewVolume->fields)._worldOBB._center.y;
      pfVar13 = &(viewVolume->fields)._worldOBB._center.z;
      LStack_12._4_8_ = *(undefined8 *)pfVar13;
      LStack_12._current = (RegexCharClass_SingleRange)(viewVolume->fields)._worldOBB._rotation.y;
      VStack_14.y = (viewVolume->fields)._worldOBB._rotation.z;
      VStack_14.z = (viewVolume->fields)._worldOBB._rotation.w;
      fVar15 = *pfVar13;
      fVar16 = (viewVolume->fields)._worldOBB._rotation.x;
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__CameraEx);
        fVar8 = (float)uVar10;
        fVar9 = (float)((ulonglong)uVar10 >> 0x20);
        fVar15 = (float)LStack_12._index;
        fVar16 = (float)LStack_12._version;
      }
      if (this_00 != (RTScene *)0x0) {
        obb._size.y = fVar8;
        obb._size.x = (float)puStack_7;
        obb._size.z = fVar9;
        obb._center.x = fVar11;
        obb._center.y = (float)LStack_12._list;
        obb._center.z = fVar15;
        obb._rotation.x = fVar16;
        obb._rotation.y = (float)LStack_12._current;
        obb._rotation.z = VStack_14.y;
        obb._rotation.w = VStack_14.z;
        obb._isValid = (viewVolume->fields)._worldOBB._isValid;
        obb._41_3_ = *(undefined3 *)&(viewVolume->fields)._worldOBB.field_0x29;
        RTScene::RTScene_OverlapBox
                  (this_00,obb,TypeInfo__RTG__CameraEx->static_fields->_objectBuffer,
                   (MethodInfo *)0x0);
        pLVar17 = TypeInfo__RTG__CameraEx->static_fields->_objectBuffer;
        if (pLVar17 != (List_1_UnityEngine_GameObject_ *)0x0) {
          if ((pLVar17->fields)._size != 0) {
            if ((TypeInfo__RTG__GameObjectTypeHelper->_1).cctor_finished_or_no_cctor == 0) {
              LStack_12._list =
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
            puStack_7 = (undefined *)
                         TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined;
            pVVar18 = Vector3Ex::Vector3Ex_FromValue(&VStack_14,1e-05,(MethodInfo *)0x0);
            uVar19._0_4_ = pVVar18->x;
            uVar19._4_4_ = pVVar18->y;
            pMVar20 = (MethodInfo *)pVVar18->z;
            if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__RTG__CameraEx);
            }
            this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   TypeInfo__RTG__CameraEx->static_fields->_objectBuffer;
            if (this == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            goto code_?;
            pLVar21 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                               (&LStack_12,this,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                               );
            VStack_14._4_8_ = ZEXT48(&LStack_22) << 0x20;
            LStack_22._list = (List_1_System_Object_ *)pLVar21->_list;
            LStack_22._index = pLVar21->_index;
            LStack_22._version = pLVar21->_version;
            LStack_22._current = *(Object **)&pLVar21->_current;
            uStack_1 = 1;
            while( true ) {
              bVar23 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                (&LStack_22,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                                );
              gameObject = LStack_22._current;
              if (bVar23 == 0) break;
              if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              queryConfig.NoVolumeSize.x = (float)(int)uVar19;
              queryConfig.ObjectTypes = (int32_t)puStack_7;
              queryConfig.NoVolumeSize.y = (float)(int)((ulonglong)uVar19 >> 0x20);
              queryConfig.NoVolumeSize.z = (float)pMVar20;
              pAVar24 = ObjectBounds::ObjectBounds_CalcWorldAABB
                                 ((AABB *)&stack0xffffff84,(GameObject *)gameObject,queryConfig,
                                  (MethodInfo *)0x0);
              LStack_12._list =
                   (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (pAVar24->_center).x;
              LStack_12._current = *(RegexCharClass_SingleRange *)&pAVar24->_isValid;
              LStack_12._index = (int32_t)(pAVar24->_center).y;
              LStack_12._version = (int32_t)(pAVar24->_center).z;
              if ((char)LStack_12._current.First != '\0') {
                in_stack_25 = (MethodInfo *)(pAVar24->_size).y;
                bVar23 = CameraViewVolume::CameraViewVolume_CheckAABB
                                  (viewVolume,*pAVar24,(MethodInfo *)0x0);
                if (bVar23 != 0) {
                  uVar19 = CONCAT44(gameObject,visibleObjects);
                  pMVar20 = 
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
                      ((Object *)&LStack_22,
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
      return point.x * pointNormal.x + point.y * pointNormal.y + point.z * pointNormal.z < 0.0;
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
      fVar11 = VStack_9.y * fVar10;
      fStack_12 = fVar5 + VStack_9.x * fVar10;
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
             (float)((uint)((float)uVar15 * (fVar6 + fVar11) + (float)uVar14 * fStack_12 +
                           pVVar1->z * fStack_13) ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
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
      fStack_7 = (float)uVar6 * (worldPos.y - VStack_5.y) + (worldPos.x - VStack_5.x) * 0.0 +
                 fVar3 * (worldPos.z - VStack_5.z);
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

