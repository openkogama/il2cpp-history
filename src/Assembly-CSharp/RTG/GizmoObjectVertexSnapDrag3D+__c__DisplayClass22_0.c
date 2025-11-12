
/* Boolean <GatherDestinationObjects>b__0(GameObject) */

bool Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D+<>c__DisplayClass22_0::
     GizmoObjectVertexSnapDrag3D_c_DisplayClass22_0__GatherDestinationObjects_b__0
               (GizmoObjectVertexSnapDrag3D_c_DisplayClass22_0 *this,GameObject *a,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__FindAll_System__Predicate<UnityEngine::GameObject>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoObjectVertexSnapDrag3D____c__DisplayClass22_1___GatherDestinationObjects_b__1_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoObjectVertexSnapDrag3D____c__DisplayClass22_1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(TypeInfo__RTG__GizmoObjectVertexSnapDrag3D____c__DisplayClass22_1);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)a;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pLVar6 = (this->fields).targetObjects;
    if (pLVar6 != (List_1_UnityEngine_GameObject_ *)0x0) {
      cVar7 = FUN_?(pLVar6,object[1].klass);
      if (cVar7 == '\0') {
        camera = (this->fields).focusCamera;
        gameObject = object[1].klass;
        uVar8._0_4_ = (float)(this->fields).boundsQConfig.ObjectTypes;
        uVar8._4_4_ = (this->fields).boundsQConfig.NoVolumeSize.x;
        uVar9._0_4_ = (this->fields).boundsQConfig.NoVolumeSize.y;
        uVar9._4_4_ = (this->fields).boundsQConfig.NoVolumeSize.z;
        if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__RTG__ObjectBounds);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
          FUN_?();
        }
        RStack_10._0_8_ = uVar8;
        RStack_10._8_8_ = uVar9;
        pAVar11 = ObjectBounds::ObjectBounds_CalcWorldAABB
                            (&AStack_12,(GameObject *)gameObject,
                             (ObjectBounds_QueryConfig *)&RStack_10,(MethodInfo *)0x0);
        AStack_13._size.x = (pAVar11->_size).x;
        AStack_13._size.y = (pAVar11->_size).y;
        AStack_13._8_8_ = *(undefined8 *)&(pAVar11->_size).z;
        AStack_13._center.y = (pAVar11->_center).y;
        AStack_13._center.z = (pAVar11->_center).z;
        AStack_13._isValid = pAVar11->_isValid;
        AStack_13._25_3_ = *(undefined3 *)&pAVar11->field_0x19;
        if (AStack_13._isValid == 0) {
          fVar14 = 0.0;
          fVar15 = 0.0;
          fVar16 = 0.0;
          fVar17 = 0.0;
        }
        else {
          pRVar18 = AABB::AABB_GetScreenRectangle(&RStack_10,&AStack_13,camera,(MethodInfo *)0x0);
          fVar14 = pRVar18->m_XMin;
          fVar15 = pRVar18->m_YMin;
          fVar16 = pRVar18->m_Width;
          fVar17 = pRVar18->m_Height;
        }
        fVar19 = (this->fields).inputDevicePos.x;
        fVar20 = (this->fields).inputDevicePos.y;
        if ((((fVar14 <= fVar19) && (fVar19 < fVar16 + fVar14)) && (fVar15 <= fVar20)) &&
           (fVar20 < fVar17 + fVar15)) {
          pLVar6 = (this->fields).targetObjects;
          this_00 = (Predicate_1_Object_ *)
                    FUN_?(TypeInfo__System__Predicate<UnityEngine::GameObject>);
          mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                    (this_00,object,
                     MethodInfo__RTG__GizmoObjectVertexSnapDrag3D____c__DisplayClass22_1___GatherDestinationObjects_b__1_UnityEngine__GameObject_
                     ,(MethodInfo *)0x0);
          if ((pLVar6 != (List_1_UnityEngine_GameObject_ *)0x0) &&
             (pLVar21 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                        List_1_System_Object__FindAll
                                  ((List_1_System_Object_ *)pLVar6,this_00,
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__FindAll_System__Predicate<UnityEngine::GameObject>_
                                  ), pLVar21 != (List_1_System_Object_ *)0x0)) {
            return (pLVar21->fields)._size != 0;
          }
          goto code_?;
        }
      }
      return 1;
    }
  }
code_?:
  FUN_?();
  pcVar22 = (code *)swi(3);
  bVar23 = (*pcVar22)();
  return bVar23;
}

