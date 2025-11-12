
/* Int32 Add2DShape(Shape2D) */

int32_t Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Add2DShape
                  (GizmoHandle *this,Shape2D *shape,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoHandleShape2D);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__Add_RTG__GizmoHandleShape2D_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__FindAll_System__Predicate<RTG::GizmoHandleShape2D>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<RTG::GizmoHandleShape2D>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoHandle____c__DisplayClass63_0___Contains2DShape_b__0_RTG__GizmoHandleShape2D_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoHandle____c__DisplayClass63_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(TypeInfo__RTG__GizmoHandle____c__DisplayClass63_0);
  if (pOVar1 != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    pOVar1[1].klass = (Object__Class *)shape;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pLVar7 = (this->fields)._2DShapes;
    this_00 = (Predicate_1_Object_ *)
              FUN_?(TypeInfo__System__Predicate<RTG::GizmoHandleShape2D>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_00,pOVar1,
               MethodInfo__RTG__GizmoHandle____c__DisplayClass63_0___Contains2DShape_b__0_RTG__GizmoHandleShape2D_
               ,(MethodInfo *)0x0);
    if ((pLVar7 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) &&
       (pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__FindAll
                            ((List_1_System_Object_ *)pLVar7,this_00,
                             MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__FindAll_System__Predicate<RTG::GizmoHandleShape2D>_
                            ), pLVar8 != (List_1_System_Object_ *)0x0)) {
      if ((pLVar8->fields)._size != 0) {
        return -1;
      }
      pOVar1 = (Object *)FUN_?(TypeInfo__RTG__GizmoHandleShape2D);
      bVar2 = iRam_? != 0;
      *(undefined2 *)&pOVar1[1].klass = 0x101;
      pOVar1[1].monitor = (MonitorData *)shape;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&pOVar1[1].monitor >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pMVar9 = 
      MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__Add_RTG__GizmoHandleShape2D_
      ;
      pLVar7 = (this->fields)._2DShapes;
      if (pLVar7 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
        piVar10 = &(pLVar7->fields)._version;
        *piVar10 = *piVar10 + 1;
        pGVar11 = (pLVar7->fields)._items;
        if (pGVar11 != (GizmoHandleShape2D__Array *)0x0) {
          uVar3 = (pLVar7->fields)._size;
          if (uVar3 < (uint)pGVar11->max_length) {
            (pLVar7->fields)._size = uVar3 + 1;
            FUN_?(pGVar11,(longlong)(int)uVar3,pOVar1);
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)pLVar7,pOVar1,pMVar9->klass->rgctx_data[0xe].method
                      );
          }
          pLVar7 = (this->fields)._2DShapes;
          if (pLVar7 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
            return (pLVar7->fields)._size + -1;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  iVar13 = (*pcVar12)();
  return iVar13;
}


/* Int32 Add3DShape(Shape3D) */

int32_t Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Add3DShape
                  (GizmoHandle *this,Shape3D *shape,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoHandleShape3D);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__Add_RTG__GizmoHandleShape3D_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__FindAll_System__Predicate<RTG::GizmoHandleShape3D>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<RTG::GizmoHandleShape3D>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoHandle____c__DisplayClass62_0___Contains3DShape_b__0_RTG__GizmoHandleShape3D_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoHandle____c__DisplayClass62_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(TypeInfo__RTG__GizmoHandle____c__DisplayClass62_0);
  if (pOVar1 != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    pOVar1[1].klass = (Object__Class *)shape;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pLVar7 = (this->fields)._3DShapes;
    this_00 = (Predicate_1_Object_ *)
              FUN_?(TypeInfo__System__Predicate<RTG::GizmoHandleShape3D>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_00,pOVar1,
               MethodInfo__RTG__GizmoHandle____c__DisplayClass62_0___Contains3DShape_b__0_RTG__GizmoHandleShape3D_
               ,(MethodInfo *)0x0);
    if ((pLVar7 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) &&
       (pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__FindAll
                            ((List_1_System_Object_ *)pLVar7,this_00,
                             MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__FindAll_System__Predicate<RTG::GizmoHandleShape3D>_
                            ), pLVar8 != (List_1_System_Object_ *)0x0)) {
      if ((pLVar8->fields)._size != 0) {
        return -1;
      }
      pOVar1 = (Object *)FUN_?(TypeInfo__RTG__GizmoHandleShape3D);
      bVar2 = iRam_? != 0;
      *(undefined2 *)&pOVar1[1].klass = 0x101;
      pOVar1[1].monitor = (MonitorData *)shape;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&pOVar1[1].monitor >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pMVar9 = 
      MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__Add_RTG__GizmoHandleShape3D_
      ;
      pLVar7 = (this->fields)._3DShapes;
      if (pLVar7 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
        piVar10 = &(pLVar7->fields)._version;
        *piVar10 = *piVar10 + 1;
        pGVar11 = (pLVar7->fields)._items;
        if (pGVar11 != (GizmoHandleShape3D__Array *)0x0) {
          uVar3 = (pLVar7->fields)._size;
          if (uVar3 < (uint)pGVar11->max_length) {
            (pLVar7->fields)._size = uVar3 + 1;
            FUN_?(pGVar11,(longlong)(int)uVar3,pOVar1);
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)pLVar7,pOVar1,pMVar9->klass->rgctx_data[0xe].method
                      );
          }
          pLVar7 = (this->fields)._3DShapes;
          if (pLVar7 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
            return (pLVar7->fields)._size + -1;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  iVar13 = (*pcVar12)();
  return iVar13;
}


/* Boolean Contains2DShape(Shape2D) */

bool Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Contains2DShape
               (GizmoHandle *this,Shape2D *shape,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__FindAll_System__Predicate<RTG::GizmoHandleShape2D>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<RTG::GizmoHandleShape2D>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoHandle____c__DisplayClass63_0___Contains2DShape_b__0_RTG__GizmoHandleShape2D_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoHandle____c__DisplayClass63_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__RTG__GizmoHandle____c__DisplayClass63_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)shape;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    this_00 = (this->fields)._2DShapes;
    this_01 = (Predicate_1_Object_ *)
              FUN_?(TypeInfo__System__Predicate<RTG::GizmoHandleShape2D>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_01,object,
               MethodInfo__RTG__GizmoHandle____c__DisplayClass63_0___Contains2DShape_b__0_RTG__GizmoHandleShape2D_
               ,(MethodInfo *)0x0);
    if ((this_00 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) &&
       (pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                 List_1_System_Object__FindAll
                           ((List_1_System_Object_ *)this_00,this_01,
                            MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__FindAll_System__Predicate<RTG::GizmoHandleShape2D>_
                           ), pLVar6 != (List_1_System_Object_ *)0x0)) {
      return (pLVar6->fields)._size != 0;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Boolean Contains3DShape(Shape3D) */

bool Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Contains3DShape
               (GizmoHandle *this,Shape3D *shape,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__FindAll_System__Predicate<RTG::GizmoHandleShape3D>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<RTG::GizmoHandleShape3D>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoHandle____c__DisplayClass62_0___Contains3DShape_b__0_RTG__GizmoHandleShape3D_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoHandle____c__DisplayClass62_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__RTG__GizmoHandle____c__DisplayClass62_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)shape;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    this_00 = (this->fields)._3DShapes;
    this_01 = (Predicate_1_Object_ *)
              FUN_?(TypeInfo__System__Predicate<RTG::GizmoHandleShape3D>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_01,object,
               MethodInfo__RTG__GizmoHandle____c__DisplayClass62_0___Contains3DShape_b__0_RTG__GizmoHandleShape3D_
               ,(MethodInfo *)0x0);
    if ((this_00 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) &&
       (pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                 List_1_System_Object__FindAll
                           ((List_1_System_Object_ *)this_00,this_01,
                            MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__FindAll_System__Predicate<RTG::GizmoHandleShape3D>_
                           ), pLVar6 != (List_1_System_Object_ *)0x0)) {
      return (pLVar6->fields)._size != 0;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Shape2D Get2DShape(Int32) */

Shape2D * Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Get2DShape
                    (GizmoHandle *this,int32_t shapeIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._2DShapes;
  if (pLVar1 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)shapeIndex) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      pSVar3 = (Shape2D *)(*pcVar2)();
      return pSVar3;
    }
    pGVar4 = (pLVar1->fields)._items;
    if (pGVar4 != (GizmoHandleShape2D__Array *)0x0) {
      if ((uint)pGVar4->max_length <= (uint)shapeIndex) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        pSVar3 = (Shape2D *)(*pcVar2)();
        return pSVar3;
      }
      if (pGVar4->vector[shapeIndex] != (GizmoHandleShape2D *)0x0) {
        return (pGVar4->vector[shapeIndex]->fields)._shape;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (Shape2D *)(*pcVar2)();
  return pSVar3;
}


/* Shape3D Get3DShape(Int32) */

Shape3D * Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Get3DShape
                    (GizmoHandle *this,int32_t shapeIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._3DShapes;
  if (pLVar1 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)shapeIndex) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      pSVar3 = (Shape3D *)(*pcVar2)();
      return pSVar3;
    }
    pGVar4 = (pLVar1->fields)._items;
    if (pGVar4 != (GizmoHandleShape3D__Array *)0x0) {
      if ((uint)pGVar4->max_length <= (uint)shapeIndex) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        pSVar3 = (Shape3D *)(*pcVar2)();
        return pSVar3;
      }
      if (pGVar4->vector[shapeIndex] != (GizmoHandleShape3D *)0x0) {
        return (pGVar4->vector[shapeIndex]->fields)._shape;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (Shape3D *)(*pcVar2)();
  return pSVar3;
}


/* GizmoHandleHoverData GetHoverData(Ray) */

GizmoHandleHoverData *
Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_GetHoverData
          (GizmoHandle *this,Ray *hoverRay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoHandleHoverData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__YesNoAnswer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  LStack_2._list = (List_1_System_Object_ *)0x0;
  LStack_2._index = 0;
  LStack_2._version = 0;
  LStack_2._current = (Object *)0x0;
  aLStack_3[0]._list = (List_1_System_Object_ *)0x0;
  aLStack_3[0]._index = 0;
  aLStack_3[0]._version = 0;
  aLStack_3[0]._current = (Object *)0x0;
  afStackX_20[0] = 0.0;
  if (((this->fields)._Is2DHoverable_k__BackingField == 0) ||
     ((this->fields)._Is2DVisible_k__BackingField == 0)) {
code_?:
    if ((this->fields)._Is3DHoverable_k__BackingField == 0) {
      return (GizmoHandleHoverData *)0x0;
    }
    if ((this->fields)._Is3DVisible_k__BackingField == 0) {
      return (GizmoHandleHoverData *)0x0;
    }
    uStack_4 = CONCAT44(uStack_4._4_4_,fVar1);
    pOStack_5 = (Object *)0x0;
    pLVar6 = (this->fields)._3DShapes;
    if (pLVar6 == (List_1_RTG_GizmoHandleShape3D_ *)0x0) goto code_?;
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&pLStack_8 >> 0xc);
      uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar12 = uVar10 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    lStack_13 = (ulonglong)(uint)(pLVar6->fields)._version << 0x20;
    uStack_14 = 0;
    aLStack_3[0]._index = (undefined4)lStack_13;
    aLStack_3[0]._version = lStack_13._4_4_;
    aLStack_3[0]._current = (Object *)0x0;
    uStack_15 = 0;
    pLStack_16 = aLStack_3;
    pOVar17 = (Object *)0x0;
    pLStack_8 = pLVar6;
    aLStack_3[0]._list = (List_1_System_Object_ *)pLVar6;
    while (bVar18 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (aLStack_3,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__MoveNext__
                              ), pOVar19 = aLStack_3[0]._current, bVar18 != 0) {
      if (aLStack_3[0]._current == (Object *)0x0) goto code_?;
      if ((*(char *)&aLStack_3[0]._current[1].klass != '\0') &&
         (*(char *)((longlong)&aLStack_3[0]._current[1].klass + 1) != '\0')) {
        pMVar20 = aLStack_3[0]._current[1].monitor;
        if (pMVar20 == (MonitorData *)0x0) goto code_?;
        pLStack_8 = *(List_1_RTG_GizmoHandleShape3D_ **)&hoverRay->m_Origin;
        lStack_13 = *(longlong *)&(hoverRay->m_Origin).z;
        uStack_14._0_4_ = (hoverRay->m_Direction).y;
        uStack_14._4_4_ = (hoverRay->m_Direction).z;
        cVar21 = (**(code **)(*(longlong *)pMVar20 + 0x1a8))
                           (pMVar20,&pLStack_8,afStackX_20,
                            *(undefined8 *)(*(longlong *)pMVar20 + 0x1b0));
        if ((cVar21 != '\0') && ((pOVar17 == (Object *)0x0 || (afStackX_20[0] < fVar1)))) {
          uStack_4 = CONCAT44(uStack_4._4_4_,afStackX_20[0]);
          pOVar17 = pOVar19;
          fVar1 = afStackX_20[0];
          pOStack_5 = pOVar19;
        }
      }
    }
    if (pOVar17 == (Object *)0x0) {
      return (GizmoHandleHoverData *)0x0;
    }
    pGVar22 = (GizmoHandleHoverData *)FUN_?(TypeInfo__RTG__GizmoHandleHoverData);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__RTG__IGizmoHandle);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (this == (GizmoHandle *)0x0) goto code_?;
    iVar23 = FUN_?(0,TypeInfo__RTG__IGizmoHandle,this);
    (pGVar22->fields)._handleId = iVar23;
    pGVar24 = (Gizmo *)FUN_?(1,TypeInfo__RTG__IGizmoHandle,this);
    (pGVar22->fields)._gizmo = pGVar24;
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&(pGVar22->fields)._gizmo >> 0xc);
      uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar12 = uVar10 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    (pGVar22->fields)._handleDimension = 2;
    fVar25 = (hoverRay->m_Origin).y;
    uVar26 = *(undefined8 *)&(hoverRay->m_Origin).z;
    (pGVar22->fields)._hoverRay.m_Origin.x = (hoverRay->m_Origin).x;
    (pGVar22->fields)._hoverRay.m_Origin.y = fVar25;
    *(undefined8 *)&(pGVar22->fields)._hoverRay.m_Origin.z = uVar26;
    fVar25 = (hoverRay->m_Direction).z;
    (pGVar22->fields)._hoverRay.m_Direction.y = (hoverRay->m_Direction).y;
    (pGVar22->fields)._hoverRay.m_Direction.z = fVar25;
    (pGVar22->fields)._hoverEnter3D = fVar1;
    uVar27 = (pGVar22->fields)._hoverRay.m_Origin.x;
    uVar28 = (pGVar22->fields)._hoverRay.m_Origin.y;
    uVar29 = (pGVar22->fields)._hoverRay.m_Direction.x;
    fVar25 = (pGVar22->fields)._hoverRay.m_Direction.y;
    fVar30 = (pGVar22->fields)._hoverRay.m_Direction.z;
    fVar31 = (pGVar22->fields)._hoverRay.m_Origin.z;
    (pGVar22->fields)._hoverPoint.x = (float)uVar29 * fVar1 + (float)uVar27;
    (pGVar22->fields)._hoverPoint.y = fVar25 * fVar1 + (float)uVar28;
    (pGVar22->fields)._hoverPoint.z = fVar30 * fVar1 + fVar31;
  }
  else {
    pGVar24 = (this->fields)._gizmo;
    if ((pGVar24 == (Gizmo *)0x0) ||
       (obj = Gizmo::Gizmo_GetWorkCamera(pGVar24,(MethodInfo *)0x0), obj == (Camera *)0x0))
    goto code_?;
    pOStack_5 = *(Object **)&hoverRay->m_Origin;
    fStack_32 = (hoverRay->m_Origin).z;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_33 = 0;
    uStack_34 = 0;
    pvVar35 = (obj->fields)._._._.m_CachedPtr;
    if (pvVar35 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar36 = (code *)swi(3);
      pGVar22 = (GizmoHandleHoverData *)(*pcVar36)();
      return pGVar22;
    }
    pcVar36 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar36 = (code *)FUN_?(&UNK_?), pcVar36 == (code *)0x0)) {
      uVar26 = func_?(&UNK_?);
      FUN_?(uVar26,0);
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar36 = (code *)swi(3);
      pGVar22 = (GizmoHandleHoverData *)(*pcVar36)();
      return pGVar22;
    }
    pcRam_? = pcVar36;
    (*pcRam_?)(pvVar35,&pOStack_5,2,&uStack_33);
    uVar26 = uStack_33;
    fVar25 = (float)uStack_33;
    fVar30 = uStack_33._4_4_;
    pOStack_5 = (Object *)0x0;
    pLVar6 = (List_1_RTG_GizmoHandleShape3D_ *)(this->fields)._2DShapes;
    if (pLVar6 == (List_1_RTG_GizmoHandleShape3D_ *)0x0) goto code_?;
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&pLStack_8 >> 0xc);
      uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar12 = uVar10 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    fVar31 = _UNK_?;
    lStack_13 = (ulonglong)(uint)(pLVar6->fields)._version << 0x20;
    uStack_14 = 0;
    LStack_2._index = (undefined4)lStack_13;
    LStack_2._version = lStack_13._4_4_;
    LStack_2._current = (Object *)0x0;
    uStack_15 = 0;
    pLStack_16 = &LStack_2;
    uStack_4 = uStack_33;
    pOVar17 = (Object *)0x0;
    fVar37 = fVar1;
    pLStack_8 = pLVar6;
    LStack_2._list = (List_1_System_Object_ *)pLVar6;
    while (bVar18 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_2,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__MoveNext__
                              ), pOVar19 = LStack_2._current, bVar18 != 0) {
      if (LStack_2._current == (Object *)0x0) goto code_?;
      if ((*(char *)&LStack_2._current[1].klass != '\0') &&
         (*(char *)((longlong)&LStack_2._current[1].klass + 1) != '\0')) {
        pMVar20 = LStack_2._current[1].monitor;
        if (pMVar20 == (MonitorData *)0x0) goto code_?;
        cVar21 = (**(code **)(*(longlong *)pMVar20 + 0x198))
                           (pMVar20,uVar26,*(undefined8 *)(*(longlong *)pMVar20 + 0x1a0));
        if (cVar21 != '\0') {
          pMVar20 = pOVar19[1].monitor;
          if (pMVar20 == (MonitorData *)0x0) goto code_?;
          pfVar38 = (float *)(**(code **)(*(longlong *)pMVar20 + 0x1a8))
                                       (&pLStack_8,pMVar20,
                                        *(undefined8 *)(*(longlong *)pMVar20 + 0x1b0));
          uStack_33 = CONCAT44((pfVar38[3] * fVar31 + pfVar38[1]) - fVar30,
                               (pfVar38[2] * fVar31 + *pfVar38) - fVar25);
          fVar39 = (float)FUN_?(&uStack_33);
          if ((pOVar17 == (Object *)0x0) || (fVar39 < fVar37)) {
            pOVar17 = pOVar19;
            fVar37 = fVar39;
            pOStack_5 = pOVar19;
          }
        }
      }
    }
    if (pOVar17 == (Object *)0x0) goto code_?;
    pGVar22 = (GizmoHandleHoverData *)FUN_?(TypeInfo__RTG__GizmoHandleHoverData);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__RTG__IGizmoHandle);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (this == (GizmoHandle *)0x0) goto code_?;
    iVar23 = FUN_?(0,TypeInfo__RTG__IGizmoHandle,this);
    (pGVar22->fields)._handleId = iVar23;
    pGVar24 = (Gizmo *)FUN_?(1,TypeInfo__RTG__IGizmoHandle,this);
    uVar40 = uStack_33;
    (pGVar22->fields)._gizmo = pGVar24;
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&(pGVar22->fields)._gizmo >> 0xc);
      uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar12 = uVar10 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    (pGVar22->fields)._handleDimension = 1;
    fVar1 = (hoverRay->m_Origin).y;
    uVar41 = *(undefined8 *)&(hoverRay->m_Origin).z;
    (pGVar22->fields)._hoverRay.m_Origin.x = (hoverRay->m_Origin).x;
    (pGVar22->fields)._hoverRay.m_Origin.y = fVar1;
    *(undefined8 *)&(pGVar22->fields)._hoverRay.m_Origin.z = uVar41;
    fVar1 = (hoverRay->m_Direction).z;
    (pGVar22->fields)._hoverRay.m_Direction.y = (hoverRay->m_Direction).y;
    (pGVar22->fields)._hoverRay.m_Direction.z = fVar1;
    uStack_33._0_4_ = (float)uVar26;
    uStack_33._4_4_ = SUB84(uVar26,4);
    (pGVar22->fields)._hoverPoint.x = (float)uStack_33;
    (pGVar22->fields)._hoverPoint.y = uStack_33._4_4_;
    (pGVar22->fields)._hoverPoint.z = 0.0;
    uStack_33 = uVar40;
  }
  if ((this->fields).CanHover == (GizmoHandleCanHoverHandler *)0x0) {
    return pGVar22;
  }
  lVar42 = FUN_?(TypeInfo__RTG__YesNoAnswer);
  pGVar43 = (this->fields).CanHover;
  if ((pGVar43 != (GizmoHandleCanHoverHandler *)0x0) &&
     ((*(pGVar43->fields)._._.invoke_impl)
                ((pGVar43->fields)._._.method_code,(this->fields)._id,(this->fields)._gizmo,pGVar22,
                 lVar42,(pGVar43->fields)._._.method), lVar42 != 0)) {
    if (*(char *)(lVar42 + 0x11) != '\0') {
      return (GizmoHandleHoverData *)0x0;
    }
    return pGVar22;
  }
code_?:
  FUN_?();
  pcVar36 = (code *)swi(3);
  pGVar22 = (GizmoHandleHoverData *)(*pcVar36)();
  return pGVar22;
}


/* Single GetZoomFactor(Camera) */

float Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_GetZoomFactor
                (GizmoHandle *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._zoomFactorTransform;
  if (pGVar1 != (GizmoTransform *)0x0) {
    fVar2 = (pGVar1->fields)._position3D.z;
    uVar3._0_4_ = (pGVar1->fields)._position3D.x;
    uVar3._4_4_ = (pGVar1->fields)._position3D.y;
    if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
      FUN_?();
    }
    aVStack_4[0]._0_8_ = uVar3;
    aVStack_4[0].z = fVar2;
    fVar2 = CameraEx::CameraEx_EstimateZoomFactor(camera,aVStack_4,(MethodInfo *)0x0);
    return fVar2;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  fVar2 = (float)(*pcVar5)();
  return fVar2;
}


/* Boolean Is2DShapeVisible(Int32) */

bool Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Is2DShapeVisible
               (GizmoHandle *this,int32_t shapeIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._2DShapes;
  if (pLVar1 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)shapeIndex) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    pGVar4 = (pLVar1->fields)._items;
    if (pGVar4 != (GizmoHandleShape2D__Array *)0x0) {
      if ((uint)pGVar4->max_length <= (uint)shapeIndex) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      if (pGVar4->vector[shapeIndex] != (GizmoHandleShape2D *)0x0) {
        return (pGVar4->vector[shapeIndex]->fields)._isVisible;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean Is3DShapeVisible(Int32) */

bool Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Is3DShapeVisible
               (GizmoHandle *this,int32_t shapeIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._3DShapes;
  if (pLVar1 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)shapeIndex) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    pGVar4 = (pLVar1->fields)._items;
    if (pGVar4 != (GizmoHandleShape3D__Array *)0x0) {
      if ((uint)pGVar4->max_length <= (uint)shapeIndex) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      if (pGVar4->vector[shapeIndex] != (GizmoHandleShape3D *)0x0) {
        return (pGVar4->vector[shapeIndex]->fields)._isVisible;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void Remove2DShape(Shape2D) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Remove2DShape
               (GizmoHandle *this,Shape2D *shape,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__RemoveAll_System__Predicate<RTG::GizmoHandleShape2D>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<RTG::GizmoHandleShape2D>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoHandle____c__DisplayClass67_0___Remove2DShape_b__0_RTG__GizmoHandleShape2D_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoHandle____c__DisplayClass67_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__RTG__GizmoHandle____c__DisplayClass67_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)shape;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    pLVar6 = (this->fields)._2DShapes;
    this_00 = (Predicate_1_Object_ *)
              FUN_?(TypeInfo__System__Predicate<RTG::GizmoHandleShape2D>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_00,object,
               MethodInfo__RTG__GizmoHandle____c__DisplayClass67_0___Remove2DShape_b__0_RTG__GizmoHandleShape2D_
               ,(MethodInfo *)0x0);
    if (pLVar6 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
      if (this_00 == (Predicate_1_Object_ *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentNullException
                  (ExceptionArgument__Enum_match,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar2 = 0;
      if ((pLVar6->fields)._size < 1) {
DAT_?:
        if ((int)uVar2 < (pLVar6->fields)._size) {
          uVar8 = uVar2 + 1;
          if ((int)uVar8 < (pLVar6->fields)._size) {
            lVar9 = (longlong)(int)uVar8;
code_?:
            lVar10 = lVar9 * 8 + 0x20;
            uVar11 = uVar8;
            do {
              pGVar12 = (pLVar6->fields)._items;
              if (pGVar12 == (GizmoHandleShape2D__Array *)0x0) goto code_?;
              if ((uint)pGVar12->max_length <= uVar11) goto DAT_?;
              cVar13 = (*(this_00->fields)._._.invoke_impl)
                                ((this_00->fields)._._.method_code,
                                 *(undefined8 *)((longlong)pGVar12->vector + lVar10 + -0x20),
                                 (this_00->fields)._._.method);
              lVar14 = lVar9;
              if (cVar13 == '\0') break;
              uVar11 = uVar11 + 1;
              lVar9 = lVar9 + 1;
              lVar10 = lVar10 + 8;
              lVar14 = lVar9;
            } while ((int)uVar11 < (pLVar6->fields)._size);
            if ((int)uVar11 < (pLVar6->fields)._size) goto code_?;
          }
code_?:
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar6->fields)._items,uVar2,(pLVar6->fields)._size - uVar2,
                     (MethodInfo *)0x0);
          piVar15 = &(pLVar6->fields)._version;
          *piVar15 = *piVar15 + 1;
          (pLVar6->fields)._size = uVar2;
        }
      }
      else {
        lVar9 = 0x20;
        do {
          pGVar12 = (pLVar6->fields)._items;
          if (pGVar12 == (GizmoHandleShape2D__Array *)0x0) goto code_?;
          if ((uint)pGVar12->max_length <= uVar2) goto DAT_?;
          cVar13 = (*(this_00->fields)._._.invoke_impl)
                            ((this_00->fields)._._.method_code,
                             *(undefined8 *)((longlong)pGVar12->vector + lVar9 + -0x20),
                             (this_00->fields)._._.method);
          if (cVar13 != '\0') goto DAT_?;
          uVar2 = uVar2 + 1;
          lVar9 = lVar9 + 8;
        } while ((int)uVar2 < (pLVar6->fields)._size);
      }
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
code_?:
  pGVar12 = (pLVar6->fields)._items;
  lVar10 = (longlong)(int)uVar2;
  lVar9 = lVar14 + 1;
  uVar2 = uVar2 + 1;
  uVar8 = uVar11 + 1;
  if (pGVar12 == (GizmoHandleShape2D__Array *)0x0) {
code_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((uint)pGVar12->max_length <= uVar11) {
DAT_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FUN_?((pLVar6->fields)._items,lVar10,pGVar12->vector[lVar14]);
  if ((pLVar6->fields)._size <= (int)uVar8) goto code_?;
  goto code_?;
}


/* Void Remove3DShape(Shape3D) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Remove3DShape
               (GizmoHandle *this,Shape3D *shape,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__RemoveAll_System__Predicate<RTG::GizmoHandleShape3D>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<RTG::GizmoHandleShape3D>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__GizmoHandle____c__DisplayClass66_0___Remove3DShape_b__0_RTG__GizmoHandleShape3D_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoHandle____c__DisplayClass66_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__RTG__GizmoHandle____c__DisplayClass66_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)shape;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    pLVar6 = (this->fields)._3DShapes;
    this_00 = (Predicate_1_Object_ *)
              FUN_?(TypeInfo__System__Predicate<RTG::GizmoHandleShape3D>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_00,object,
               MethodInfo__RTG__GizmoHandle____c__DisplayClass66_0___Remove3DShape_b__0_RTG__GizmoHandleShape3D_
               ,(MethodInfo *)0x0);
    if (pLVar6 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
      if (this_00 == (Predicate_1_Object_ *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentNullException
                  (ExceptionArgument__Enum_match,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar2 = 0;
      if ((pLVar6->fields)._size < 1) {
DAT_?:
        if ((int)uVar2 < (pLVar6->fields)._size) {
          uVar8 = uVar2 + 1;
          if ((int)uVar8 < (pLVar6->fields)._size) {
            lVar9 = (longlong)(int)uVar8;
code_?:
            lVar10 = lVar9 * 8 + 0x20;
            uVar11 = uVar8;
            do {
              pGVar12 = (pLVar6->fields)._items;
              if (pGVar12 == (GizmoHandleShape3D__Array *)0x0) goto code_?;
              if ((uint)pGVar12->max_length <= uVar11) goto DAT_?;
              cVar13 = (*(this_00->fields)._._.invoke_impl)
                                ((this_00->fields)._._.method_code,
                                 *(undefined8 *)((longlong)pGVar12->vector + lVar10 + -0x20),
                                 (this_00->fields)._._.method);
              lVar14 = lVar9;
              if (cVar13 == '\0') break;
              uVar11 = uVar11 + 1;
              lVar9 = lVar9 + 1;
              lVar10 = lVar10 + 8;
              lVar14 = lVar9;
            } while ((int)uVar11 < (pLVar6->fields)._size);
            if ((int)uVar11 < (pLVar6->fields)._size) goto code_?;
          }
code_?:
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar6->fields)._items,uVar2,(pLVar6->fields)._size - uVar2,
                     (MethodInfo *)0x0);
          piVar15 = &(pLVar6->fields)._version;
          *piVar15 = *piVar15 + 1;
          (pLVar6->fields)._size = uVar2;
        }
      }
      else {
        lVar9 = 0x20;
        do {
          pGVar12 = (pLVar6->fields)._items;
          if (pGVar12 == (GizmoHandleShape3D__Array *)0x0) goto code_?;
          if ((uint)pGVar12->max_length <= uVar2) goto DAT_?;
          cVar13 = (*(this_00->fields)._._.invoke_impl)
                            ((this_00->fields)._._.method_code,
                             *(undefined8 *)((longlong)pGVar12->vector + lVar9 + -0x20),
                             (this_00->fields)._._.method);
          if (cVar13 != '\0') goto DAT_?;
          uVar2 = uVar2 + 1;
          lVar9 = lVar9 + 8;
        } while ((int)uVar2 < (pLVar6->fields)._size);
      }
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
code_?:
  pGVar12 = (pLVar6->fields)._items;
  lVar10 = (longlong)(int)uVar2;
  lVar9 = lVar14 + 1;
  uVar2 = uVar2 + 1;
  uVar8 = uVar11 + 1;
  if (pGVar12 == (GizmoHandleShape3D__Array *)0x0) {
code_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((uint)pGVar12->max_length <= uVar11) {
DAT_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FUN_?((pLVar6->fields)._items,lVar10,pGVar12->vector[lVar14]);
  if ((pLVar6->fields)._size <= (int)uVar8) goto code_?;
  goto code_?;
}


/* Void Render2DSolid(Camera) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Render2DSolid
               (GizmoHandle *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._Is2DVisible_k__BackingField != 0) {
    LStack_1._list = (List_1_System_Object_ *)(this->fields)._2DShapes;
    if ((List_1_RTG_GizmoHandleShape2D_ *)LStack_1._list == (List_1_RTG_GizmoHandleShape2D_ *)0x0)
    {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)
                  (uint)(((List_1_RTG_GizmoHandleShape2D_ *)LStack_1._list)->fields)._version <<
                 0x20);
    uStack_9 = 0;
    LStack_1._8_8_ = pLStack_8;
    LStack_1._current = (Object *)0x0;
    uStack_4 = 0;
    pLStack_8 = &LStack_1;
    while (bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_1,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__MoveNext__
                             ), bVar10 != 0) {
      if (LStack_1._current == (Object *)0x0) goto code_?;
      if (*(char *)&LStack_1._current[1].klass != '\0') {
        pMVar11 = LStack_1._current[1].monitor;
        if (pMVar11 == (MonitorData *)0x0) {
          FUN_?();
code_?:
          FUN_?();
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (**(code **)(*(longlong *)pMVar11 + 0x178))
                  (pMVar11,camera,*(undefined8 *)(*(longlong *)pMVar11 + 0x180));
      }
    }
  }
  return;
}


/* Void Render2DSolid(Camera, Int32) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Render2DSolid_1
               (GizmoHandle *this,Camera *camera,int32_t shapeIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._2DShapes;
  if (pLVar1 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)shapeIndex) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pGVar3 = (pLVar1->fields)._items;
    if (pGVar3 != (GizmoHandleShape2D__Array *)0x0) {
      if ((uint)pGVar3->max_length <= (uint)shapeIndex) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((this->fields)._Is2DVisible_k__BackingField != 0) {
        pGVar4 = pGVar3->vector[shapeIndex];
        if (pGVar4 == (GizmoHandleShape2D *)0x0) goto code_?;
        if ((pGVar4->fields)._isVisible != 0) {
          pSVar5 = (pGVar4->fields)._shape;
          if (pSVar5 == (Shape2D *)0x0) goto code_?;
          (*(pSVar5->klass->vtable).__unknown.methodPtr)
                    (pSVar5,camera,(pSVar5->klass->vtable).__unknown.method);
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Render2DWire(Camera) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Render2DWire
               (GizmoHandle *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._Is2DVisible_k__BackingField != 0) {
    LStack_1._list = (List_1_System_Object_ *)(this->fields)._2DShapes;
    if ((List_1_RTG_GizmoHandleShape2D_ *)LStack_1._list == (List_1_RTG_GizmoHandleShape2D_ *)0x0)
    {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)
                  (uint)(((List_1_RTG_GizmoHandleShape2D_ *)LStack_1._list)->fields)._version <<
                 0x20);
    uStack_9 = 0;
    LStack_1._8_8_ = pLStack_8;
    LStack_1._current = (Object *)0x0;
    uStack_4 = 0;
    pLStack_8 = &LStack_1;
    while (bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_1,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__MoveNext__
                             ), bVar10 != 0) {
      if (LStack_1._current == (Object *)0x0) goto code_?;
      if (*(char *)&LStack_1._current[1].klass != '\0') {
        pMVar11 = LStack_1._current[1].monitor;
        if (pMVar11 == (MonitorData *)0x0) {
          FUN_?();
code_?:
          FUN_?();
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (**(code **)(*(longlong *)pMVar11 + 0x188))
                  (pMVar11,camera,*(undefined8 *)(*(longlong *)pMVar11 + 400));
      }
    }
  }
  return;
}


/* Void Render2DWire(Camera, Int32) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Render2DWire_1
               (GizmoHandle *this,Camera *camera,int32_t shapeIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._2DShapes;
  if (pLVar1 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)shapeIndex) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pGVar3 = (pLVar1->fields)._items;
    if (pGVar3 != (GizmoHandleShape2D__Array *)0x0) {
      if ((uint)pGVar3->max_length <= (uint)shapeIndex) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((this->fields)._Is2DVisible_k__BackingField != 0) {
        pGVar4 = pGVar3->vector[shapeIndex];
        if (pGVar4 == (GizmoHandleShape2D *)0x0) goto code_?;
        if ((pGVar4->fields)._isVisible != 0) {
          pSVar5 = (pGVar4->fields)._shape;
          if (pSVar5 == (Shape2D *)0x0) goto code_?;
          (*(pSVar5->klass->vtable).__unknown_1.methodPtr)
                    (pSVar5,camera,(pSVar5->klass->vtable).__unknown_1.method);
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Render3DSolid() */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Render3DSolid
               (GizmoHandle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._Is3DVisible_k__BackingField != 0) {
    LStack_1._list = (List_1_System_Object_ *)(this->fields)._3DShapes;
    if ((List_1_RTG_GizmoHandleShape3D_ *)LStack_1._list == (List_1_RTG_GizmoHandleShape3D_ *)0x0)
    {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)
                  (uint)(((List_1_RTG_GizmoHandleShape3D_ *)LStack_1._list)->fields)._version <<
                 0x20);
    uStack_9 = 0;
    LStack_1._8_8_ = pLStack_8;
    LStack_1._current = (Object *)0x0;
    uStack_4 = 0;
    pLStack_8 = &LStack_1;
    while (bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_1,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__MoveNext__
                             ), bVar10 != 0) {
      if (LStack_1._current == (Object *)0x0) goto code_?;
      if (*(char *)&LStack_1._current[1].klass != '\0') {
        pMVar11 = LStack_1._current[1].monitor;
        if (pMVar11 == (MonitorData *)0x0) {
          FUN_?();
code_?:
          FUN_?();
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (**(code **)(*(longlong *)pMVar11 + 0x188))
                  (pMVar11,*(undefined8 *)(*(longlong *)pMVar11 + 400));
      }
    }
  }
  return;
}


/* Void Render3DSolid(Int32) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Render3DSolid_1
               (GizmoHandle *this,int32_t shapeIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._3DShapes;
  if (pLVar1 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)shapeIndex) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pGVar3 = (pLVar1->fields)._items;
    if (pGVar3 != (GizmoHandleShape3D__Array *)0x0) {
      if ((uint)pGVar3->max_length <= (uint)shapeIndex) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((this->fields)._Is3DVisible_k__BackingField != 0) {
        pGVar4 = pGVar3->vector[shapeIndex];
        if (pGVar4 == (GizmoHandleShape3D *)0x0) goto code_?;
        if ((pGVar4->fields)._isVisible != 0) {
          pSVar5 = (pGVar4->fields)._shape;
          if (pSVar5 == (Shape3D *)0x0) goto code_?;
          (*(pSVar5->klass->vtable).__unknown.methodPtr)
                    (pSVar5,(pSVar5->klass->vtable).__unknown.method);
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Render3DWire() */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Render3DWire
               (GizmoHandle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._Is3DVisible_k__BackingField != 0) {
    LStack_1._list = (List_1_System_Object_ *)(this->fields)._3DShapes;
    if ((List_1_RTG_GizmoHandleShape3D_ *)LStack_1._list == (List_1_RTG_GizmoHandleShape3D_ *)0x0)
    {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)
                  (uint)(((List_1_RTG_GizmoHandleShape3D_ *)LStack_1._list)->fields)._version <<
                 0x20);
    uStack_9 = 0;
    LStack_1._8_8_ = pLStack_8;
    LStack_1._current = (Object *)0x0;
    uStack_4 = 0;
    pLStack_8 = &LStack_1;
    while (bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_1,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__MoveNext__
                             ), bVar10 != 0) {
      if (LStack_1._current == (Object *)0x0) goto code_?;
      if (*(char *)&LStack_1._current[1].klass != '\0') {
        pMVar11 = LStack_1._current[1].monitor;
        if (pMVar11 == (MonitorData *)0x0) {
          FUN_?();
code_?:
          FUN_?();
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (**(code **)(*(longlong *)pMVar11 + 0x198))
                  (pMVar11,*(undefined8 *)(*(longlong *)pMVar11 + 0x1a0));
      }
    }
  }
  return;
}


/* Void Render3DWire(Int32) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Render3DWire_1
               (GizmoHandle *this,int32_t shapeIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._3DShapes;
  if (pLVar1 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)shapeIndex) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pGVar3 = (pLVar1->fields)._items;
    if (pGVar3 != (GizmoHandleShape3D__Array *)0x0) {
      if ((uint)pGVar3->max_length <= (uint)shapeIndex) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((this->fields)._Is3DVisible_k__BackingField != 0) {
        pGVar4 = pGVar3->vector[shapeIndex];
        if (pGVar4 == (GizmoHandleShape3D *)0x0) goto code_?;
        if ((pGVar4->fields)._isVisible != 0) {
          pSVar5 = (pGVar4->fields)._shape;
          if (pSVar5 == (Shape3D *)0x0) goto code_?;
          (*(pSVar5->klass->vtable).__unknown_1.methodPtr)
                    (pSVar5,(pSVar5->klass->vtable).__unknown_1.method);
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Set2DShapeHoverable(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Set2DShapeHoverable
               (GizmoHandle *this,int32_t shapeIndex,bool isHoverable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._2DShapes;
  if (pLVar1 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)shapeIndex) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pGVar3 = (pLVar1->fields)._items;
    if (pGVar3 != (GizmoHandleShape2D__Array *)0x0) {
      if ((uint)pGVar3->max_length <= (uint)shapeIndex) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (pGVar3->vector[shapeIndex] != (GizmoHandleShape2D *)0x0) {
        (pGVar3->vector[shapeIndex]->fields)._isHoverable = isHoverable;
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Set2DShapeVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Set2DShapeVisible
               (GizmoHandle *this,int32_t shapeIndex,bool isVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._2DShapes;
  if (pLVar1 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)shapeIndex) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pGVar3 = (pLVar1->fields)._items;
    if (pGVar3 != (GizmoHandleShape2D__Array *)0x0) {
      if ((uint)pGVar3->max_length <= (uint)shapeIndex) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (pGVar3->vector[shapeIndex] != (GizmoHandleShape2D *)0x0) {
        (pGVar3->vector[shapeIndex]->fields)._isVisible = isVisible;
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Set3DShapeHoverable(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Set3DShapeHoverable
               (GizmoHandle *this,int32_t shapeIndex,bool isHoverable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._3DShapes;
  if (pLVar1 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)shapeIndex) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pGVar3 = (pLVar1->fields)._items;
    if (pGVar3 != (GizmoHandleShape3D__Array *)0x0) {
      if ((uint)pGVar3->max_length <= (uint)shapeIndex) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (pGVar3->vector[shapeIndex] != (GizmoHandleShape3D *)0x0) {
        (pGVar3->vector[shapeIndex]->fields)._isHoverable = isHoverable;
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Set3DShapeVisible(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_Set3DShapeVisible
               (GizmoHandle *this,int32_t shapeIndex,bool isVisible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._3DShapes;
  if (pLVar1 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)shapeIndex) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pGVar3 = (pLVar1->fields)._items;
    if (pGVar3 != (GizmoHandleShape3D__Array *)0x0) {
      if ((uint)pGVar3->max_length <= (uint)shapeIndex) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (pGVar3->vector[shapeIndex] != (GizmoHandleShape3D *)0x0) {
        (pGVar3->vector[shapeIndex]->fields)._isVisible = isVisible;
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetAll2DShapesVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_SetAll2DShapesVisible
               (GizmoHandle *this,bool visible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._2DShapes;
  if ((List_1_RTG_GizmoHandleShape2D_ *)LStack_1._list == (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)
                (uint)(((List_1_RTG_GizmoHandleShape2D_ *)LStack_1._list)->fields)._version << 0x20
               );
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape2D>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) break;
    *(bool *)&LStack_1._current[1].klass = visible;
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetAll3DShapesVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_SetAll3DShapesVisible
               (GizmoHandle *this,bool visible,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._3DShapes;
  if ((List_1_RTG_GizmoHandleShape3D_ *)LStack_1._list == (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)
                (uint)(((List_1_RTG_GizmoHandleShape3D_ *)LStack_1._list)->fields)._version << 0x20
               );
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::GizmoHandleShape3D>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) break;
    *(bool *)&LStack_1._current[1].klass = visible;
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetHoverable(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_SetHoverable
               (GizmoHandle *this,bool isHoverable,MethodInfo *method)

{
  (this->fields)._Is3DHoverable_k__BackingField = isHoverable;
  (this->fields)._Is2DHoverable_k__BackingField = isHoverable;
  return;
}


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_SetVisible
               (GizmoHandle *this,bool isVisible,MethodInfo *method)

{
  (this->fields)._Is3DVisible_k__BackingField = isVisible;
  (this->fields)._Is2DVisible_k__BackingField = isVisible;
  return;
}


/* Void SetZoomFactorTransform(GizmoTransform) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_SetZoomFactorTransform
               (GizmoHandle *this,GizmoTransform *transform,MethodInfo *method)

{
  if (transform == (GizmoTransform *)0x0) {
    pGVar1 = (this->fields)._gizmo;
    if (pGVar1 == (Gizmo *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = iRam_? != 0;
    (this->fields)._zoomFactorTransform = (pGVar1->fields)._transform;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields)._zoomFactorTransform >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
      return;
    }
  }
  else {
    bVar3 = iRam_? != 0;
    (this->fields)._zoomFactorTransform = transform;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields)._zoomFactorTransform >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
  }
  return;
}


/* GizmoHandle(Gizmo, Int32) */

void Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle__ctor
               (GizmoHandle *this,Gizmo *gizmo,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Priority);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (Priority *)FUN_?(TypeInfo__RTG__Priority);
  bVar2 = iRam_? != 0;
  (this->fields)._genericHoverPriority = pPVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._genericHoverPriority >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pPVar1 = (Priority *)FUN_?(TypeInfo__RTG__Priority);
  bVar2 = iRam_? != 0;
  (this->fields)._hoverPriority2D = pPVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._hoverPriority2D >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pPVar1 = (Priority *)FUN_?(TypeInfo__RTG__Priority);
  bVar2 = iRam_? != 0;
  (this->fields)._hoverPriority3D = pPVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._hoverPriority3D >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_00 = (List_1_RTG_GizmoHandleShape3D_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__List__);
  bVar2 = iRam_? != 0;
  (this->fields)._3DShapes = this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._3DShapes >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_01 = (List_1_RTG_GizmoHandleShape2D_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__List__);
  iVar7 = iRam_?;
  (this->fields)._2DShapes = this_01;
  if (iVar7 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields)._2DShapes >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar2);
  }
  (this->fields)._id = id;
  (this->fields)._gizmo = gizmo;
  iVar8 = 0;
  if (iVar7 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields)._gizmo >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar2);
  }
  pGVar9 = (this->fields)._gizmo;
  if (pGVar9 == (Gizmo *)0x0) {
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  (this->fields)._zoomFactorTransform = (pGVar9->fields)._transform;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields)._zoomFactorTransform >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  (this->fields)._Is2DHoverable_k__BackingField = 1;
  (this->fields)._Is3DHoverable_k__BackingField = 1;
  (this->fields)._Is2DVisible_k__BackingField = 1;
  (this->fields)._Is3DVisible_k__BackingField = 1;
  return;
}


/* Boolean get_Has2DShapes() */

bool Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_get_Has2DShapes
               (GizmoHandle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._2DShapes;
  if (pLVar1 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
    return (pLVar1->fields)._size != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_Has3DShapes() */

bool Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_get_Has3DShapes
               (GizmoHandle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._3DShapes;
  if (pLVar1 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
    return (pLVar1->fields)._size != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Int32 get_Num2DShapes() */

int32_t Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_get_Num2DShapes
                  (GizmoHandle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape2D>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._2DShapes;
  if (pLVar1 != (List_1_RTG_GizmoHandleShape2D_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Int32 get_Num3DShapes() */

int32_t Assembly-CSharp.dll::RTG::GizmoHandle::GizmoHandle_get_Num3DShapes
                  (GizmoHandle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GizmoHandleShape3D>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._3DShapes;
  if (pLVar1 != (List_1_RTG_GizmoHandleShape3D_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

