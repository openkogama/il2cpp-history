
/* Void Apply() */

void Assembly-CSharp.dll::RTG::LocalGizmoTransformSnapshot::LocalGizmoTransformSnapshot_Apply
               (LocalGizmoTransformSnapshot *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if ((this->fields)._transform == (GizmoTransform *)0x0) {
    return;
  }
  pGVar2 = (this->fields)._transform;
  bVar3 = (pGVar2->fields)._firingChanged3DEvent;
  if ((this->fields)._parentTransform == (GizmoTransform *)0x0) {
    if ((bVar3 == 0) &&
       (uVar4 = (this->fields)._localPosition3D.x, uVar5 = (this->fields)._localPosition3D.y,
       uVar6 = (pGVar2->fields)._position3D.x,
       fVar1 = (pGVar2->fields)._position3D.z - (this->fields)._localPosition3D.z,
       fVar7 = (pGVar2->fields)._position3D.y - (float)uVar5,
       _UNK_? <=
       fVar7 * fVar7 + ((float)uVar6 - (float)uVar4) * ((float)uVar6 - (float)uVar4) +
       fVar1 * fVar1)) {
      fVar7 = (this->fields)._localPosition3D.y;
      fVar1 = (this->fields)._localPosition3D.z;
      (pGVar2->fields)._position3D.x = (this->fields)._localPosition3D.x;
      (pGVar2->fields)._position3D.y = fVar7;
      (pGVar2->fields)._position3D.z = fVar1;
      GizmoTransform::GizmoTransform_OnPosition3DChanged(pGVar2,(MethodInfo *)0x0);
    }
    pGVar2 = (this->fields)._transform;
    if (pGVar2 != (GizmoTransform *)0x0) {
      aQStack_8[0].x = (this->fields)._localRotation3D.x;
      aQStack_8[0].y = (this->fields)._localRotation3D.y;
      aQStack_8[0].z = (this->fields)._localRotation3D.z;
      aQStack_8[0].w = (this->fields)._localRotation3D.w;
      GizmoTransform::GizmoTransform_set_Rotation3D(pGVar2,aQStack_8,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._transform;
      if (pGVar2 != (GizmoTransform *)0x0) {
        value.y = (this->fields)._localPosition2D.y;
        value.x = (this->fields)._localPosition2D.x;
        GizmoTransform::GizmoTransform_set_Position2D(pGVar2,value,(MethodInfo *)0x0);
        pGVar2 = (this->fields)._transform;
        if (pGVar2 != (GizmoTransform *)0x0) {
          if ((pGVar2->fields)._firingChanged2DEvent != 0) {
            return;
          }
          fVar1 = (this->fields)._localRotation2D_Degrees;
          if ((pGVar2->fields)._rotation2DDegrees == fVar1) {
            return;
          }
          GizmoTransform::GizmoTransform_ChangeRotation2D(pGVar2,fVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else {
    if ((bVar3 == 0) &&
       (uVar9 = (pGVar2->fields)._localPosition3D.x, uVar10 = (pGVar2->fields)._localPosition3D.y,
       uStack_11._0_4_ = (this->fields)._localPosition3D.x,
       uStack_11._4_4_ = (this->fields)._localPosition3D.y,
       fVar7 = (pGVar2->fields)._localPosition3D.z - (this->fields)._localPosition3D.z,
       _UNK_? <=
       ((float)uVar10 - (float)uStack_11._4_4_) * ((float)uVar10 - (float)uStack_11._4_4_) +
       ((float)uVar9 - (float)(undefined4)uStack_11) * ((float)uVar9 - (float)(undefined4)uStack_11)
       + fVar7 * fVar7)) {
      fVar12 = (this->fields)._localPosition3D.y;
      fVar7 = (this->fields)._localPosition3D.z;
      (pGVar2->fields)._localPosition3D.x = (this->fields)._localPosition3D.x;
      (pGVar2->fields)._localPosition3D.y = fVar12;
      (pGVar2->fields)._localPosition3D.z = fVar7;
      GizmoTransform::GizmoTransform_OnLocalPosition3DChanged(pGVar2,(MethodInfo *)0x0);
    }
    pGVar2 = (this->fields)._transform;
    if (pGVar2 != (GizmoTransform *)0x0) {
      aQStack_8[0].x = (this->fields)._localRotation3D.x;
      aQStack_8[0].y = (this->fields)._localRotation3D.y;
      aQStack_8[0].z = (this->fields)._localRotation3D.z;
      aQStack_8[0].w = (this->fields)._localRotation3D.w;
      GizmoTransform::GizmoTransform_set_LocalRotation3D(pGVar2,aQStack_8,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._transform;
      fVar7 = (this->fields)._localPosition2D.x;
      fVar12 = (this->fields)._localPosition2D.y;
      if (pGVar2 != (GizmoTransform *)0x0) {
        if (((pGVar2->fields)._firingChanged2DEvent == 0) &&
           (fVar13 = (pGVar2->fields)._localPosition2D.x - fVar7,
           fVar14 = (pGVar2->fields)._localPosition2D.y - fVar12,
           fVar1 <= fVar14 * fVar14 + fVar13 * fVar13)) {
          (pGVar2->fields)._localPosition2D.x = fVar7;
          (pGVar2->fields)._localPosition2D.y = fVar12;
          GizmoTransform::GizmoTransform_OnLocalPosition2DChanged(pGVar2,(MethodInfo *)0x0);
        }
        pGVar2 = (this->fields)._transform;
        if (pGVar2 != (GizmoTransform *)0x0) {
          if ((pGVar2->fields)._firingChanged2DEvent != 0) {
            return;
          }
          fVar1 = (this->fields)._localRotation2D_Degrees;
          if ((pGVar2->fields)._localRotation2DDegrees == fVar1) {
            return;
          }
          bVar15 = cRam_? == '\0';
          (pGVar2->fields)._localRotation2DDegrees = fVar1;
          if (bVar15) {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_11._0_4_ = (pVVar16->forwardVector).x;
          uStack_11._4_4_ = (pVVar16->forwardVector).y;
          fStack_17 = (pVVar16->forwardVector).z;
          aQStack_8[0].x = 0.0;
          aQStack_8[0].y = 0.0;
          aQStack_8[0].z = 0.0;
          aQStack_8[0].w = 0.0;
          pcVar18 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
            uVar19 = func_?(&UNK_?);
            FUN_?(uVar19,0);
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          pcRam_? = pcVar18;
          (*pcRam_?)(fVar1,&uStack_11,aQStack_8);
          fVar7 = aQStack_8[0].y;
          fVar1 = aQStack_8[0].x;
          fVar12 = aQStack_8[0].z;
          fStack_20 = aQStack_8[0].w;
          fVar13 = aQStack_8[0].y * aQStack_8[0].y + aQStack_8[0].x * aQStack_8[0].x +
                   aQStack_8[0].z * aQStack_8[0].z + aQStack_8[0].w * aQStack_8[0].w;
          if (fVar13 < 0.0) {
            fVar13 = (float)FUN_?(fVar13);
          }
          else {
            fVar13 = SQRT(fVar13);
          }
          if (_UNK_? <= fVar13) {
            fVar13 = _UNK_? / fVar13;
            fVar1 = fVar1 * fVar13;
            fVar7 = fVar7 * fVar13;
            fVar12 = fVar12 * fVar13;
            fStack_20 = fStack_20 * fVar13;
          }
          uStack_11 = CONCAT44(fVar7,fVar1);
          (pGVar2->fields)._localRotation2D.x = fVar1;
          (pGVar2->fields)._localRotation2D.y = fVar7;
          (pGVar2->fields)._localRotation2D.z = fVar12;
          (pGVar2->fields)._localRotation2D.w = fStack_20;
          fStack_17 = fVar12;
          GizmoTransform::GizmoTransform_OnLocalRotation2DChanged(pGVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* List`1[RTG.LocalGizmoTransformSnapshot] GetSnapshotCollection(IEnumerable`1[RTG.Gizmo]) */

List_1_RTG_LocalGizmoTransformSnapshot_ *
Assembly-CSharp.dll::RTG::LocalGizmoTransformSnapshot::
LocalGizmoTransformSnapshot_GetSnapshotCollection
          (IEnumerable_1_RTG_Gizmo_ *gizmos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<RTG::Gizmo>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<RTG::Gizmo>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::LocalGizmoTransformSnapshot>__Add_RTG__LocalGizmoTransformSnapshot_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::LocalGizmoTransformSnapshot>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::LocalGizmoTransformSnapshot>__List_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::LocalGizmoTransformSnapshot>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__LocalGizmoTransformSnapshot);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_RTG_LocalGizmoTransformSnapshot_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<RTG::LocalGizmoTransformSnapshot>
                         );
  if (gizmos == (IEnumerable_1_RTG_Gizmo_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<RTG::LocalGizmoTransformSnapshot>__List__
              );
    return pLVar1;
  }
  pvVar2 = MethodInfo__System__Collections__Generic__List<RTG::LocalGizmoTransformSnapshot>__List_int_
            ->klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  pLVar3 = (LocalGizmoTransformSnapshot__Array *)FUN_?(pvVar2,0x14);
  (pLVar1->fields)._items = pLVar3;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pLVar1->fields >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  plVar9 = (longlong *)
            FUN_?(0,TypeInfo__System__Collections__Generic__IEnumerable<RTG::Gizmo>,gizmos);
  do {
    if (plVar9 == (longlong *)0x0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar10 = (code *)swi(3);
      pLVar1 = (List_1_RTG_LocalGizmoTransformSnapshot_ *)(*pcVar10)();
      return pLVar1;
    }
    cVar11 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    if (cVar11 == '\0') {
      if (plVar9 == (longlong *)0x0) {
        return pLVar1;
      }
      FUN_?(0,TypeInfo__System__IDisposable,plVar9);
      return pLVar1;
    }
    if (plVar9 == (longlong *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    lVar12 = *plVar9;
    uVar13 = 0;
    if (*(ushort *)(lVar12 + 0x12e) != 0) {
      do {
        if (*(IEnumerator_1_RTG_Gizmo___Class **)
             (*(longlong *)(lVar12 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
            TypeInfo__System__Collections__Generic__IEnumerator<RTG::Gizmo>) {
          puVar14 = (undefined8 *)
                    ((longlong)*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10)
                     * 0x10 + 0x138 + lVar12);
          goto code_?;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(ushort *)(lVar12 + 0x12e));
    }
    puVar14 = (undefined8 *)
              FUN_?(plVar9,TypeInfo__System__Collections__Generic__IEnumerator<RTG::Gizmo>,
                            0);
code_?:
    lVar12 = (*(code *)*puVar14)(plVar9,puVar14[1]);
    item = (Object *)FUN_?(TypeInfo__RTG__LocalGizmoTransformSnapshot);
    if (lVar12 == 0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pOVar15 = *(Object__Class **)(lVar12 + 0x170);
    if (item == (Object *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    if (pOVar15 != (Object__Class *)0x0) {
      item[1].klass = pOVar15;
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)(item + 1) >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      iVar16 = iRam_?;
      item[1].monitor = (MonitorData *)(pOVar15->_0).nestedTypes;
      if (iVar16 != 0) {
        uVar4 = (uint)((ulonglong)&item[1].monitor >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      TVar17 = (pOVar15->_0).this_arg.data.__klassIndex;
      item[2].klass = *(Object__Class **)&(pOVar15->_0).byval_arg.attrs;
      *(TypeDefinitionIndex *)&item[2].monitor = TVar17;
      uVar18 = *(undefined4 *)&(pOVar15->_0).castClass;
      uVar19 = *(undefined4 *)((longlong)&(pOVar15->_0).castClass + 4);
      uVar20 = *(undefined4 *)&(pOVar15->_0).declaringType;
      *(undefined4 *)((longlong)&item[2].monitor + 4) =
           *(undefined4 *)((longlong)&(pOVar15->_0).element_class + 4);
      *(undefined4 *)&item[3].klass = uVar18;
      *(undefined4 *)((longlong)&item[3].klass + 4) = uVar19;
      *(undefined4 *)&item[3].monitor = uVar20;
      uVar18 = *(undefined4 *)&(pOVar15->_0).generic_class;
      *(undefined4 *)((longlong)&item[3].monitor + 4) =
           *(undefined4 *)((longlong)&(pOVar15->_0).parent + 4);
      *(undefined4 *)&item[4].klass = uVar18;
      *(undefined4 *)((longlong)&item[4].klass + 4) = *(undefined4 *)&(pOVar15->_0).klass;
    }
    pMVar21 = 
    MethodInfo__System__Collections__Generic__List<RTG::LocalGizmoTransformSnapshot>__Add_RTG__LocalGizmoTransformSnapshot_
    ;
    if (pLVar1 == (List_1_RTG_LocalGizmoTransformSnapshot_ *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    piVar22 = &(pLVar1->fields)._version;
    *piVar22 = *piVar22 + 1;
    pLVar3 = (pLVar1->fields)._items;
    uVar4 = (pLVar1->fields)._size;
    if (pLVar3 == (LocalGizmoTransformSnapshot__Array *)0x0) {
      FUN_?();
      goto code_?;
    }
    if (uVar4 < (uint)pLVar3->max_length) {
      (pLVar1->fields)._size = uVar4 + 1;
      FUN_?(pLVar3,(longlong)(int)uVar4,item);
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__AddWithResize
                ((List_1_System_Object_ *)pLVar1,item,pMVar21->klass->rgctx_data[0xe].method);
    }
  } while( true );
}


/* Void Snapshot(GizmoTransform) */

void Assembly-CSharp.dll::RTG::LocalGizmoTransformSnapshot::LocalGizmoTransformSnapshot_Snapshot
               (LocalGizmoTransformSnapshot *this,GizmoTransform *transform,MethodInfo *method)

{
  if (transform != (GizmoTransform *)0x0) {
    (this->fields)._transform = transform;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&this->fields >> 0xc);
      uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
      do {
        uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
        puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    iVar6 = iRam_?;
    (this->fields)._parentTransform = (transform->fields)._parent;
    if (iVar6 != 0) {
      uVar1 = (uint)((ulonglong)&(this->fields)._parentTransform >> 0xc);
      uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
      do {
        uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
        puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    fVar7 = (transform->fields)._localPosition3D.y;
    fVar8 = (transform->fields)._localPosition3D.z;
    (this->fields)._localPosition3D.x = (transform->fields)._localPosition3D.x;
    (this->fields)._localPosition3D.y = fVar7;
    (this->fields)._localPosition3D.z = fVar8;
    fVar8 = (transform->fields)._localRotation3D.y;
    fVar7 = (transform->fields)._localRotation3D.z;
    fVar9 = (transform->fields)._localRotation3D.w;
    (this->fields)._localRotation3D.x = (transform->fields)._localRotation3D.x;
    (this->fields)._localRotation3D.y = fVar8;
    (this->fields)._localRotation3D.z = fVar7;
    (this->fields)._localRotation3D.w = fVar9;
    fVar8 = (transform->fields)._localPosition2D.x;
    (this->fields)._localPosition2D.y = (transform->fields)._localPosition2D.y;
    (this->fields)._localPosition2D.x = fVar8;
    (this->fields)._localRotation2D_Degrees = (transform->fields)._localRotation2DDegrees;
  }
  return;
}

