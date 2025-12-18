
/* AxisDescriptor GetFirstAxisDescriptor(PlaneId, PlaneQuadrantId) */

AxisDescriptor *
Assembly-CSharp.dll::RTG::PlaneIdHelper::PlaneIdHelper_GetFirstAxisDescriptor
          (PlaneId__Enum planeId,PlaneQuadrantId__Enum planeQuadrant,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__AxisDescriptor);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__PlaneIdHelper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__PlaneIdHelper->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = 0;
  if (planeId != PlaneId__Enum_XY) {
    iVar1 = (planeId == PlaneId__Enum_ZX) + 1;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__FindAll_System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__PlaneIdHelper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__PlaneIdHelper____c__DisplayClass9_0___GetFirstAxisSign_b__0_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__PlaneIdHelper____c__DisplayClass9_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar2 = FUN_?(TypeInfo__RTG__PlaneIdHelper____c__DisplayClass9_0);
  if (lVar2 != 0) {
    *(PlaneQuadrantId__Enum *)(lVar2 + 0x10) = planeQuadrant;
    if (*(int *)&(TypeInfo__RTG__PlaneIdHelper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__RTG__PlaneIdHelper);
    }
    pLVar3 = TypeInfo__RTG__PlaneIdHelper->static_fields->_planeInfo;
    if (pLVar3 != (List_1_RTG_PlaneIdHelper_PlaneInfo_ *)0x0) {
      if ((uint)(pLVar3->fields)._size <= planeId) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        pAVar5 = (AxisDescriptor *)(*pcVar4)();
        return pAVar5;
      }
      pPVar6 = (pLVar3->fields)._items;
      if (pPVar6 != (PlaneIdHelper_PlaneInfo__Array *)0x0) {
        if ((PlaneId__Enum)pPVar6->max_length <= planeId) {
code_?:
          FUN_?();
          pcVar4 = (code *)swi(3);
          pAVar5 = (AxisDescriptor *)(*pcVar4)();
          return pAVar5;
        }
        uVar7 = *(undefined8 *)(pPVar6->vector + (int)planeId);
        pLVar8 = pPVar6->vector[(int)planeId].QuadrantInfo;
        uVar9 = FUN_?(TypeInfo__System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>);
        FUN_?(uVar9,lVar2,
                      MethodInfo__RTG__PlaneIdHelper____c__DisplayClass9_0___GetFirstAxisSign_b__0_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                      ,in_R9,uVar7);
        if (pLVar8 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
          lVar2 = FUN_?(pLVar8,uVar9);
          if (lVar2 != 0) {
            if (*(int *)(lVar2 + 0x18) == 0) goto code_?;
            lVar2 = *(longlong *)(lVar2 + 0x10);
            if (lVar2 != 0) {
              if (*(int *)(lVar2 + 0x18) != 0) {
                iVar10 = (int32_t)((ulonglong)*(undefined8 *)(lVar2 + 0x20) >> 0x20);
                pAVar5 = (AxisDescriptor *)FUN_?(TypeInfo__RTG__AxisDescriptor);
                (pAVar5->fields)._index = iVar1;
                (pAVar5->fields)._sign = iVar10;
                return pAVar5;
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pAVar5 = (AxisDescriptor *)(*pcVar4)();
  return pAVar5;
}


/* AxisSign GetFirstAxisSign(PlaneId, PlaneQuadrantId) */

AxisSign__Enum
Assembly-CSharp.dll::RTG::PlaneIdHelper::PlaneIdHelper_GetFirstAxisSign
          (PlaneId__Enum planeId,PlaneQuadrantId__Enum planeQuadrant,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__FindAll_System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__PlaneIdHelper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__PlaneIdHelper____c__DisplayClass9_0___GetFirstAxisSign_b__0_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__PlaneIdHelper____c__DisplayClass9_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__RTG__PlaneIdHelper____c__DisplayClass9_0);
  if (lVar1 != 0) {
    *(PlaneQuadrantId__Enum *)(lVar1 + 0x10) = planeQuadrant;
    if (*(int *)&(TypeInfo__RTG__PlaneIdHelper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__RTG__PlaneIdHelper);
    }
    pLVar2 = TypeInfo__RTG__PlaneIdHelper->static_fields->_planeInfo;
    if (pLVar2 != (List_1_RTG_PlaneIdHelper_PlaneInfo_ *)0x0) {
      if ((uint)(pLVar2->fields)._size <= planeId) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        AVar4 = (*pcVar3)();
        return AVar4;
      }
      pPVar5 = (pLVar2->fields)._items;
      if (pPVar5 != (PlaneIdHelper_PlaneInfo__Array *)0x0) {
        if ((PlaneId__Enum)pPVar5->max_length <= planeId) {
code_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          AVar4 = (*pcVar3)();
          return AVar4;
        }
        uVar6 = *(undefined8 *)(pPVar5->vector + (int)planeId);
        pLVar7 = pPVar5->vector[(int)planeId].QuadrantInfo;
        uVar8 = FUN_?(TypeInfo__System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>);
        FUN_?(uVar8,lVar1,
                      MethodInfo__RTG__PlaneIdHelper____c__DisplayClass9_0___GetFirstAxisSign_b__0_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                      ,in_R9,uVar6);
        if (pLVar7 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
          lVar1 = FUN_?(pLVar7,uVar8);
          if (lVar1 != 0) {
            if (*(int *)(lVar1 + 0x18) == 0) goto code_?;
            lVar1 = *(longlong *)(lVar1 + 0x10);
            if (lVar1 != 0) {
              if (*(int *)(lVar1 + 0x18) != 0) {
                return (AxisSign__Enum)((ulonglong)*(undefined8 *)(lVar1 + 0x20) >> 0x20);
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  AVar4 = (*pcVar3)();
  return AVar4;
}


/* PlaneQuadrantId GetQuadrantFromAxesSigns(PlaneId, AxisSign, AxisSign) */

PlaneQuadrantId__Enum
Assembly-CSharp.dll::RTG::PlaneIdHelper::PlaneIdHelper_GetQuadrantFromAxesSigns
          (PlaneId__Enum planeId,AxisSign__Enum firstAxisSign,AxisSign__Enum secondAxisSign,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__FindAll_System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__PlaneIdHelper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__PlaneIdHelper____c__DisplayClass11_0___GetQuadrantFromAxesSigns_b__0_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__PlaneIdHelper____c__DisplayClass11_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__RTG__PlaneIdHelper____c__DisplayClass11_0);
  if (lVar1 != 0) {
    *(AxisSign__Enum *)(lVar1 + 0x10) = firstAxisSign;
    *(AxisSign__Enum *)(lVar1 + 0x14) = secondAxisSign;
    if (*(int *)&(TypeInfo__RTG__PlaneIdHelper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__RTG__PlaneIdHelper);
    }
    pLVar2 = TypeInfo__RTG__PlaneIdHelper->static_fields->_planeInfo;
    if (pLVar2 != (List_1_RTG_PlaneIdHelper_PlaneInfo_ *)0x0) {
      if ((uint)(pLVar2->fields)._size <= planeId) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        PVar4 = (*pcVar3)();
        return PVar4;
      }
      pPVar5 = (pLVar2->fields)._items;
      if (pPVar5 != (PlaneIdHelper_PlaneInfo__Array *)0x0) {
        if ((PlaneId__Enum)pPVar5->max_length <= planeId) {
code_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          PVar4 = (*pcVar3)();
          return PVar4;
        }
        pLVar6 = pPVar5->vector[(int)planeId].QuadrantInfo;
        uVar7 = FUN_?(TypeInfo__System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>);
        FUN_?(uVar7,lVar1,
                      MethodInfo__RTG__PlaneIdHelper____c__DisplayClass11_0___GetQuadrantFromAxesSigns_b__0_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                     );
        if (pLVar6 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
          lVar1 = FUN_?(pLVar6,uVar7);
          if (lVar1 != 0) {
            if (*(int *)(lVar1 + 0x18) == 0) goto code_?;
            lVar1 = *(longlong *)(lVar1 + 0x10);
            if (lVar1 != 0) {
              if (*(int *)(lVar1 + 0x18) != 0) {
                PStack_8 = (PlaneQuadrantId__Enum)*(undefined8 *)(lVar1 + 0x20);
                return PStack_8;
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  PVar4 = (*pcVar3)();
  return PVar4;
}


/* AxisDescriptor GetSecondAxisDescriptor(PlaneId, PlaneQuadrantId) */

AxisDescriptor *
Assembly-CSharp.dll::RTG::PlaneIdHelper::PlaneIdHelper_GetSecondAxisDescriptor
          (PlaneId__Enum planeId,PlaneQuadrantId__Enum planeQuadrant,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__AxisDescriptor);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__PlaneIdHelper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__PlaneIdHelper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (planeId == PlaneId__Enum_XY) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
    if (planeId != PlaneId__Enum_ZX) {
      iVar1 = 2;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__FindAll_System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__PlaneIdHelper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__PlaneIdHelper____c__DisplayClass10_0___GetSecondAxisSign_b__0_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__PlaneIdHelper____c__DisplayClass10_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar2 = FUN_?(TypeInfo__RTG__PlaneIdHelper____c__DisplayClass10_0);
  if (lVar2 != 0) {
    *(PlaneQuadrantId__Enum *)(lVar2 + 0x10) = planeQuadrant;
    if (*(int *)&(TypeInfo__RTG__PlaneIdHelper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__RTG__PlaneIdHelper);
    }
    pLVar3 = TypeInfo__RTG__PlaneIdHelper->static_fields->_planeInfo;
    if (pLVar3 != (List_1_RTG_PlaneIdHelper_PlaneInfo_ *)0x0) {
      if ((uint)(pLVar3->fields)._size <= planeId) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        pAVar5 = (AxisDescriptor *)(*pcVar4)();
        return pAVar5;
      }
      pPVar6 = (pLVar3->fields)._items;
      if (pPVar6 != (PlaneIdHelper_PlaneInfo__Array *)0x0) {
        if ((PlaneId__Enum)pPVar6->max_length <= planeId) {
code_?:
          FUN_?();
          pcVar4 = (code *)swi(3);
          pAVar5 = (AxisDescriptor *)(*pcVar4)();
          return pAVar5;
        }
        uVar7 = *(undefined8 *)(pPVar6->vector + (int)planeId);
        pLVar8 = pPVar6->vector[(int)planeId].QuadrantInfo;
        uVar9 = FUN_?(TypeInfo__System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>);
        FUN_?(uVar9,lVar2,
                      MethodInfo__RTG__PlaneIdHelper____c__DisplayClass10_0___GetSecondAxisSign_b__0_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                      ,in_R9,uVar7);
        if ((pLVar8 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) &&
           (lVar2 = FUN_?(pLVar8,uVar9), lVar2 != 0)) {
          if (*(int *)(lVar2 + 0x18) == 0) goto code_?;
          lVar2 = *(longlong *)(lVar2 + 0x10);
          if (lVar2 != 0) {
            if (*(int *)(lVar2 + 0x18) != 0) {
              iVar10 = *(int32_t *)(lVar2 + 0x28);
              pAVar5 = (AxisDescriptor *)FUN_?(TypeInfo__RTG__AxisDescriptor);
              (pAVar5->fields)._sign = iVar10;
              (pAVar5->fields)._index = iVar1;
              return pAVar5;
            }
            goto code_?;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pAVar5 = (AxisDescriptor *)(*pcVar4)();
  return pAVar5;
}


/* AxisSign GetSecondAxisSign(PlaneId, PlaneQuadrantId) */

AxisSign__Enum
Assembly-CSharp.dll::RTG::PlaneIdHelper::PlaneIdHelper_GetSecondAxisSign
          (PlaneId__Enum planeId,PlaneQuadrantId__Enum planeQuadrant,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__FindAll_System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__PlaneIdHelper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__PlaneIdHelper____c__DisplayClass10_0___GetSecondAxisSign_b__0_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__PlaneIdHelper____c__DisplayClass10_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__RTG__PlaneIdHelper____c__DisplayClass10_0);
  if (lVar1 != 0) {
    *(PlaneQuadrantId__Enum *)(lVar1 + 0x10) = planeQuadrant;
    if (*(int *)&(TypeInfo__RTG__PlaneIdHelper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__RTG__PlaneIdHelper);
    }
    pLVar2 = TypeInfo__RTG__PlaneIdHelper->static_fields->_planeInfo;
    if (pLVar2 != (List_1_RTG_PlaneIdHelper_PlaneInfo_ *)0x0) {
      if ((uint)(pLVar2->fields)._size <= planeId) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        AVar4 = (*pcVar3)();
        return AVar4;
      }
      pPVar5 = (pLVar2->fields)._items;
      if (pPVar5 != (PlaneIdHelper_PlaneInfo__Array *)0x0) {
        if ((PlaneId__Enum)pPVar5->max_length <= planeId) {
code_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          AVar4 = (*pcVar3)();
          return AVar4;
        }
        uVar6 = *(undefined8 *)(pPVar5->vector + (int)planeId);
        pLVar7 = pPVar5->vector[(int)planeId].QuadrantInfo;
        uVar8 = FUN_?(TypeInfo__System__Predicate<RTG::PlaneIdHelper::PlaneQuadrantInfo>);
        FUN_?(uVar8,lVar1,
                      MethodInfo__RTG__PlaneIdHelper____c__DisplayClass10_0___GetSecondAxisSign_b__0_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                      ,in_R9,uVar6);
        if (pLVar7 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
          lVar1 = FUN_?(pLVar7,uVar8);
          if (lVar1 != 0) {
            if (*(int *)(lVar1 + 0x18) == 0) goto code_?;
            lVar1 = *(longlong *)(lVar1 + 0x10);
            if (lVar1 != 0) {
              if (*(int *)(lVar1 + 0x18) != 0) {
                return *(AxisSign__Enum *)(lVar1 + 0x28);
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  AVar4 = (*pcVar3)();
  return AVar4;
}


/* PlaneId NormalAxisIndexToPlaneId(Int32) */

PlaneId__Enum
Assembly-CSharp.dll::RTG::PlaneIdHelper::PlaneIdHelper_NormalAxisIndexToPlaneId
          (int32_t axisIndex,MethodInfo *method)

{
  if (axisIndex != 0) {
    PVar1 = PlaneId__Enum_ZX;
    if (axisIndex != 1) {
      PVar1 = PlaneId__Enum_XY;
    }
    return PVar1;
  }
  return PlaneId__Enum_YZ;
}


/* Int32 PlaneIdToFirstAxisIndex(PlaneId) */

int32_t Assembly-CSharp.dll::RTG::PlaneIdHelper::PlaneIdHelper_PlaneIdToFirstAxisIndex
                  (PlaneId__Enum planeId,MethodInfo *method)

{
  iVar1 = 0;
  if (planeId != PlaneId__Enum_XY) {
    iVar1 = (planeId == PlaneId__Enum_ZX) + 1;
  }
  return iVar1;
}


/* Int32 PlaneIdToSecondAxisIndex(PlaneId) */

int32_t Assembly-CSharp.dll::RTG::PlaneIdHelper::PlaneIdHelper_PlaneIdToSecondAxisIndex
                  (PlaneId__Enum planeId,MethodInfo *method)

{
  if (planeId != PlaneId__Enum_XY) {
    iVar1 = 0;
    if (planeId != PlaneId__Enum_ZX) {
      iVar1 = 2;
    }
    return iVar1;
  }
  return 1;
}


/* PlaneIdHelper() */

void Assembly-CSharp.dll::RTG::PlaneIdHelper::PlaneIdHelper__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__Add_RTG__PlaneIdHelper__PlaneInfo_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__List_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__set_Item_int__RTG__PlaneIdHelper__PlaneInfo_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__PlaneIdHelper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__PlaneId);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = (ulonglong)(uint)uStack_1;
  pLVar2 = (List_1_RTG_PlaneIdHelper_PlaneInfo_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>
                        );
  pvVar3 = MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__List_int_
            ->klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
    pvVar3 = (void *)FUN_?(pvVar3);
  }
  pPVar4 = (PlaneIdHelper_PlaneInfo__Array *)FUN_?(pvVar3,3);
  bVar5 = iRam_? != 0;
  (pLVar2->fields)._items = pPVar4;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&pLVar2->fields >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  auStack_10._0_4_ = 0;
  auStack_10._4_4_ = 0;
  pLStack_11 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0;
  FUN_?(pLVar2,auStack_10,
                MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__Add_RTG__PlaneIdHelper__PlaneInfo_
               );
  auStack_10._0_4_ = 0;
  auStack_10._4_4_ = 0;
  pLStack_11 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0;
  FUN_?(pLVar2,auStack_10,
                MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__Add_RTG__PlaneIdHelper__PlaneInfo_
               );
  auStack_10 = (undefined1  [8])0x0;
  pLStack_11 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0;
  FUN_?(pLVar2,auStack_10,
                MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneInfo>__Add_RTG__PlaneIdHelper__PlaneInfo_
               );
  bVar5 = iRam_? != 0;
  TypeInfo__RTG__PlaneIdHelper->static_fields->_planeInfo = pLVar2;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)TypeInfo__RTG__PlaneIdHelper->static_fields >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pPVar12 = (PlaneId__Enum__Array *)FUN_?(TypeInfo__RTG__PlaneId,3);
  if (pPVar12 != (PlaneId__Enum__Array *)0x0) {
    if (((uint)pPVar12->max_length < 2) ||
       (pPVar12->vector[1] = PlaneId__Enum_ZX, (uint)pPVar12->max_length < 3))
    goto code_?;
    pPVar12->vector[2] = PlaneId__Enum_YZ;
    TypeInfo__RTG__PlaneIdHelper->static_fields->_allPlaneIds = pPVar12;
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&TypeInfo__RTG__PlaneIdHelper->static_fields->_allPlaneIds >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    uStack_1 = 0;
    pLVar13 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>
                           );
    FUN_?(pLVar13,
                  MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__List__
                 );
    pMVar14 = 
    MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
    ;
    if (pLVar13 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
      piVar15 = &(pLVar13->fields)._version;
      *piVar15 = *piVar15 + 1;
      pPVar16 = (pLVar13->fields)._items;
      auStack_10 = (undefined1  [8])0x0;
      if (pPVar16 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
        uVar6 = (pLVar13->fields)._size;
        if (uVar6 < (uint)pPVar16->max_length) {
          (pLVar13->fields)._size = uVar6 + 1;
          auStack_10 = (undefined1  [8])0x0;
          if ((uint)pPVar16->max_length <= uVar6) goto code_?;
          pPVar16->vector[(int)uVar6].Quadrant = 0;
          pPVar16->vector[(int)uVar6].FirstAxisSign = 0;
          pPVar16->vector[(int)uVar6].SecondAxisSign = 0;
        }
        else {
          pLStack_11 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                       ((ulonglong)pLStack_11 & 0xffffffff00000000);
          mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                    (pLVar13,(PlaneIdHelper_PlaneQuadrantInfo *)auStack_10,
                     pMVar14->klass->rgctx_data[0xe].method);
        }
        pMVar14 = 
        MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
        ;
        piVar15 = &(pLVar13->fields)._version;
        *piVar15 = *piVar15 + 1;
        pPVar16 = (pLVar13->fields)._items;
        auStack_10 = (undefined1  [8])0x100000001;
        if (pPVar16 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
          uVar6 = (pLVar13->fields)._size;
          if (uVar6 < (uint)pPVar16->max_length) {
            (pLVar13->fields)._size = uVar6 + 1;
            auStack_10 = (undefined1  [8])0x100000001;
            if ((uint)pPVar16->max_length <= uVar6) goto code_?;
            pPVar16->vector[(int)uVar6].Quadrant = 1;
            pPVar16->vector[(int)uVar6].FirstAxisSign = 1;
            pPVar16->vector[(int)uVar6].SecondAxisSign = 0;
          }
          else {
            pLStack_11 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                         ((ulonglong)pLStack_11 & 0xffffffff00000000);
            mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]
            ::List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                      (pLVar13,(PlaneIdHelper_PlaneQuadrantInfo *)auStack_10,
                       pMVar14->klass->rgctx_data[0xe].method);
          }
          pMVar14 = 
          MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
          ;
          piVar15 = &(pLVar13->fields)._version;
          *piVar15 = *piVar15 + 1;
          pPVar16 = (pLVar13->fields)._items;
          auStack_10 = (undefined1  [8])0x100000002;
          if (pPVar16 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
            uVar6 = (pLVar13->fields)._size;
            if (uVar6 < (uint)pPVar16->max_length) {
              (pLVar13->fields)._size = uVar6 + 1;
              auStack_10 = (undefined1  [8])0x100000002;
              if ((uint)pPVar16->max_length <= uVar6) goto code_?;
              pPVar16->vector[(int)uVar6].Quadrant = 2;
              pPVar16->vector[(int)uVar6].FirstAxisSign = 1;
              pPVar16->vector[(int)uVar6].SecondAxisSign = 1;
            }
            else {
              pLStack_11 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                           CONCAT44(pLStack_11._4_4_,1);
              mscorlib.dll::System::Collections::Generic::List`1[RTG::
              PlaneIdHelper+PlaneQuadrantInfo]::
              List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                        (pLVar13,(PlaneIdHelper_PlaneQuadrantInfo *)auStack_10,
                         pMVar14->klass->rgctx_data[0xe].method);
            }
            pMVar14 = 
            MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
            ;
            piVar15 = &(pLVar13->fields)._version;
            *piVar15 = *piVar15 + 1;
            pPVar16 = (pLVar13->fields)._items;
            auStack_10 = (undefined1  [8])0x3;
            if (pPVar16 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
              uVar6 = (pLVar13->fields)._size;
              if (uVar6 < (uint)pPVar16->max_length) {
                (pLVar13->fields)._size = uVar6 + 1;
                auStack_10 = (undefined1  [8])0x3;
                if ((uint)pPVar16->max_length <= uVar6) goto code_?;
                pPVar16->vector[(int)uVar6].Quadrant = 3;
                pPVar16->vector[(int)uVar6].FirstAxisSign = 0;
                pPVar16->vector[(int)uVar6].SecondAxisSign = 1;
              }
              else {
                pLStack_11 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                             CONCAT44(pLStack_11._4_4_,1);
                mscorlib.dll::System::Collections::Generic::List`1[RTG::
                PlaneIdHelper+PlaneQuadrantInfo]::
                List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                          (pLVar13,(PlaneIdHelper_PlaneQuadrantInfo *)auStack_10,
                           pMVar14->klass->rgctx_data[0xe].method);
              }
              if (iRam_? != 0) {
                uVar6 = (uint)((ulonglong)apLStack_17 >> 0xc);
                lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                do {
                  uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                  puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                  LOCK();
                  bVar5 = uVar8 == *puVar9;
                  if (bVar5) {
                    *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar5);
              }
              iVar18 = iRam_?;
              pLVar2 = TypeInfo__RTG__PlaneIdHelper->static_fields->_planeInfo;
              apLStack_17[0] = pLVar13;
              if (pLVar2 != (List_1_RTG_PlaneIdHelper_PlaneInfo_ *)0x0) {
                if ((pLVar2->fields)._size == 0) {
code_?:
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar19 = (code *)swi(3);
                  (*pcVar19)();
                  return;
                }
                pPVar4 = (pLVar2->fields)._items;
                auStack_10 = (undefined1  [8])uStack_1;
                pLStack_11 = pLVar13;
                if (pPVar4 != (PlaneIdHelper_PlaneInfo__Array *)0x0) {
                  if ((int)pPVar4->max_length == 0) goto code_?;
                  *(ulonglong *)pPVar4->vector = uStack_1;
                  pPVar4->vector[0].QuadrantInfo = pLVar13;
                  if (iVar18 != 0) {
                    uVar6 = (uint)((ulonglong)&pPVar4->vector[0].QuadrantInfo >> 0xc);
                    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                      LOCK();
                      bVar5 = uVar8 == *puVar9;
                      if (bVar5) {
                        *puVar9 = uVar8 | 1L << (ulonglong)(uVar6 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar5);
                  }
                  piVar15 = &(pLVar2->fields)._version;
                  *piVar15 = *piVar15 + 1;
                  apLStack_17[0] = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0;
                  uStack_1 = 1;
                  pLVar13 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                            FUN_?(
                                         TypeInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>
                                         );
                  FUN_?(pLVar13,
                                MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__List__
                               );
                  pMVar14 = 
                  MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                  ;
                  if (pLVar13 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
                    piVar15 = &(pLVar13->fields)._version;
                    *piVar15 = *piVar15 + 1;
                    pPVar16 = (pLVar13->fields)._items;
                    auStack_10 = (undefined1  [8])0x0;
                    if (pPVar16 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                      uVar6 = (pLVar13->fields)._size;
                      if (uVar6 < (uint)pPVar16->max_length) {
                        (pLVar13->fields)._size = uVar6 + 1;
                        auStack_10 = (undefined1  [8])0x0;
                        if ((uint)pPVar16->max_length <= uVar6) goto code_?;
                        pPVar16->vector[(int)uVar6].Quadrant = 0;
                        pPVar16->vector[(int)uVar6].FirstAxisSign = 0;
                        pPVar16->vector[(int)uVar6].SecondAxisSign = 1;
                      }
                      else {
                        pLStack_11 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                                     CONCAT44(pLStack_11._4_4_,1);
                        mscorlib.dll::System::Collections::Generic::List`1[RTG::
                        PlaneIdHelper+PlaneQuadrantInfo]::
                        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                  (pLVar13,(PlaneIdHelper_PlaneQuadrantInfo *)auStack_10,
                                   pMVar14->klass->rgctx_data[0xe].method);
                      }
                      pMVar14 = 
                      MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                      ;
                      piVar15 = &(pLVar13->fields)._version;
                      *piVar15 = *piVar15 + 1;
                      pPVar16 = (pLVar13->fields)._items;
                      auStack_10 = (undefined1  [8])0x1;
                      if (pPVar16 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                        uVar6 = (pLVar13->fields)._size;
                        if (uVar6 < (uint)pPVar16->max_length) {
                          (pLVar13->fields)._size = uVar6 + 1;
                          auStack_10 = (undefined1  [8])0x1;
                          if ((uint)pPVar16->max_length <= uVar6) goto code_?;
                          pPVar16->vector[(int)uVar6].Quadrant = 1;
                          pPVar16->vector[(int)uVar6].FirstAxisSign = 0;
                          pPVar16->vector[(int)uVar6].SecondAxisSign = 0;
                        }
                        else {
                          pLStack_11 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                                       ((ulonglong)pLStack_11 & 0xffffffff00000000);
                          mscorlib.dll::System::Collections::Generic::List`1[RTG::
                          PlaneIdHelper+PlaneQuadrantInfo]::
                          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                    (pLVar13,(PlaneIdHelper_PlaneQuadrantInfo *)auStack_10,
                                     pMVar14->klass->rgctx_data[0xe].method);
                        }
                        pMVar14 = 
                        MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                        ;
                        piVar15 = &(pLVar13->fields)._version;
                        *piVar15 = *piVar15 + 1;
                        pPVar16 = (pLVar13->fields)._items;
                        auStack_10 = (undefined1  [8])0x100000002;
                        if (pPVar16 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                          uVar6 = (pLVar13->fields)._size;
                          if (uVar6 < (uint)pPVar16->max_length) {
                            (pLVar13->fields)._size = uVar6 + 1;
                            auStack_10 = (undefined1  [8])0x100000002;
                            if ((uint)pPVar16->max_length <= uVar6) goto code_?;
                            pPVar16->vector[(int)uVar6].Quadrant = 2;
                            pPVar16->vector[(int)uVar6].FirstAxisSign = 1;
                            pPVar16->vector[(int)uVar6].SecondAxisSign = 0;
                          }
                          else {
                            pLStack_11 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                                         ((ulonglong)pLStack_11 & 0xffffffff00000000);
                            mscorlib.dll::System::Collections::Generic::List`1[RTG::
                            PlaneIdHelper+PlaneQuadrantInfo]::
                            List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                      (pLVar13,(PlaneIdHelper_PlaneQuadrantInfo *)auStack_10,
                                       pMVar14->klass->rgctx_data[0xe].method);
                          }
                          pMVar14 = 
                          MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                          ;
                          piVar15 = &(pLVar13->fields)._version;
                          *piVar15 = *piVar15 + 1;
                          pPVar16 = (pLVar13->fields)._items;
                          auStack_10 = (undefined1  [8])0x100000003;
                          if (pPVar16 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                            uVar6 = (pLVar13->fields)._size;
                            if (uVar6 < (uint)pPVar16->max_length) {
                              (pLVar13->fields)._size = uVar6 + 1;
                              auStack_10 = (undefined1  [8])0x100000003;
                              if ((uint)pPVar16->max_length <= uVar6) goto code_?;
                              pPVar16->vector[(int)uVar6].Quadrant = 3;
                              pPVar16->vector[(int)uVar6].FirstAxisSign = 1;
                              pPVar16->vector[(int)uVar6].SecondAxisSign = 1;
                            }
                            else {
                              pLStack_11 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                                           CONCAT44(pLStack_11._4_4_,1);
                              mscorlib.dll::System::Collections::Generic::List`1[RTG::
                              PlaneIdHelper+PlaneQuadrantInfo]::
                              List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                        (pLVar13,(PlaneIdHelper_PlaneQuadrantInfo *)auStack_10,
                                         pMVar14->klass->rgctx_data[0xe].method);
                            }
                            if (iRam_? != 0) {
                              uVar6 = (uint)((ulonglong)apLStack_17 >> 0xc);
                              lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                              do {
                                uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                                puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                                LOCK();
                                bVar5 = uVar8 == *puVar9;
                                if (bVar5) {
                                  *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                                }
                                UNLOCK();
                              } while (!bVar5);
                            }
                            iVar18 = iRam_?;
                            pLVar2 = TypeInfo__RTG__PlaneIdHelper->static_fields->_planeInfo;
                            apLStack_17[0] = pLVar13;
                            if (pLVar2 != (List_1_RTG_PlaneIdHelper_PlaneInfo_ *)0x0) {
                              if ((uint)(pLVar2->fields)._size < 2) goto code_?;
                              pPVar4 = (pLVar2->fields)._items;
                              auStack_10 = (undefined1  [8])uStack_1;
                              pLStack_11 = pLVar13;
                              if (pPVar4 != (PlaneIdHelper_PlaneInfo__Array *)0x0) {
                                if ((uint)pPVar4->max_length < 2) {
code_?:
                                  FUN_?();
                                  pcVar19 = (code *)swi(3);
                                  (*pcVar19)();
                                  return;
                                }
                                *(ulonglong *)(pPVar4->vector + 1) = uStack_1;
                                pPVar4->vector[1].QuadrantInfo = pLVar13;
                                if (iVar18 != 0) {
                                  uVar6 = (uint)((ulonglong)&pPVar4->vector[1].QuadrantInfo >> 0xc
                                                 );
                                  lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                                  do {
                                    uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                                    puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                                    LOCK();
                                    bVar5 = uVar8 == *puVar9;
                                    if (bVar5) {
                                      *puVar9 = uVar8 | 1L << (ulonglong)(uVar6 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar5);
                                }
                                piVar15 = &(pLVar2->fields)._version;
                                *piVar15 = *piVar15 + 1;
                                apLStack_17[0] = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0;
                                uStack_1 = 2;
                                pLVar13 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                                          FUN_?(
                                                  TypeInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>
                                                  );
                                FUN_?(pLVar13,
                                              MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__List__
                                             );
                                pMVar14 = 
                                MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                                ;
                                if (pLVar13 != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
                                  piVar15 = &(pLVar13->fields)._version;
                                  *piVar15 = *piVar15 + 1;
                                  pPVar16 = (pLVar13->fields)._items;
                                  auStack_10 = (undefined1  [8])0x0;
                                  if (pPVar16 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                    uVar6 = (pLVar13->fields)._size;
                                    if (uVar6 < (uint)pPVar16->max_length) {
                                      (pLVar13->fields)._size = uVar6 + 1;
                                      auStack_10 = (undefined1  [8])0x0;
                                      if ((uint)pPVar16->max_length <= uVar6)
                                      goto code_?;
                                      pPVar16->vector[(int)uVar6].Quadrant = 0;
                                      pPVar16->vector[(int)uVar6].FirstAxisSign = 0;
                                      pPVar16->vector[(int)uVar6].SecondAxisSign = 0;
                                    }
                                    else {
                                      pLStack_11 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                                                   ((ulonglong)pLStack_11 & 0xffffffff00000000);
                                      mscorlib.dll::System::Collections::Generic::List`1[RTG::
                                      PlaneIdHelper+PlaneQuadrantInfo]::
                                      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                (pLVar13,(PlaneIdHelper_PlaneQuadrantInfo *)
                                                         auStack_10,
                                                 pMVar14->klass->rgctx_data[0xe].method);
                                    }
                                    pMVar14 = 
                                    MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                                    ;
                                    piVar15 = &(pLVar13->fields)._version;
                                    *piVar15 = *piVar15 + 1;
                                    pPVar16 = (pLVar13->fields)._items;
                                    auStack_10 = (undefined1  [8])0x100000001;
                                    if (pPVar16 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                      uVar6 = (pLVar13->fields)._size;
                                      if (uVar6 < (uint)pPVar16->max_length) {
                                        (pLVar13->fields)._size = uVar6 + 1;
                                        auStack_10 = (undefined1  [8])0x100000001;
                                        if ((uint)pPVar16->max_length <= uVar6)
                                        goto code_?;
                                        pPVar16->vector[(int)uVar6].Quadrant = 1;
                                        pPVar16->vector[(int)uVar6].FirstAxisSign = 1;
                                        pPVar16->vector[(int)uVar6].SecondAxisSign = 0;
                                      }
                                      else {
                                        pLStack_11 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                                                     ((ulonglong)pLStack_11 & 0xffffffff00000000);
                                        mscorlib.dll::System::Collections::Generic::List`1[RTG::
                                        PlaneIdHelper+PlaneQuadrantInfo]::
                                        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                  (pLVar13,(PlaneIdHelper_PlaneQuadrantInfo *)
                                                           auStack_10,
                                                   pMVar14->klass->rgctx_data[0xe].method);
                                      }
                                      pMVar14 = 
                                      MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                                      ;
                                      piVar15 = &(pLVar13->fields)._version;
                                      *piVar15 = *piVar15 + 1;
                                      pPVar16 = (pLVar13->fields)._items;
                                      auStack_10 = (undefined1  [8])0x100000002;
                                      if (pPVar16 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
                                        uVar6 = (pLVar13->fields)._size;
                                        if (uVar6 < (uint)pPVar16->max_length) {
                                          (pLVar13->fields)._size = uVar6 + 1;
                                          auStack_10 = (undefined1  [8])0x100000002;
                                          if ((uint)pPVar16->max_length <= uVar6)
                                          goto code_?;
                                          pPVar16->vector[(int)uVar6].Quadrant = 2;
                                          pPVar16->vector[(int)uVar6].FirstAxisSign = 1;
                                          pPVar16->vector[(int)uVar6].SecondAxisSign = 1;
                                        }
                                        else {
                                          pLStack_11 = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_
                                                        *)CONCAT44(pLStack_11._4_4_,1);
                                          mscorlib.dll::System::Collections::Generic::List`1[RTG::
                                          PlaneIdHelper+PlaneQuadrantInfo]::
                                          List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                    (pLVar13,(PlaneIdHelper_PlaneQuadrantInfo *)
                                                             auStack_10,
                                                     pMVar14->klass->rgctx_data[0xe].method);
                                        }
                                        pMVar14 = 
                                        MethodInfo__System__Collections__Generic__List<RTG::PlaneIdHelper::PlaneQuadrantInfo>__Add_RTG__PlaneIdHelper__PlaneQuadrantInfo_
                                        ;
                                        piVar15 = &(pLVar13->fields)._version;
                                        *piVar15 = *piVar15 + 1;
                                        pPVar16 = (pLVar13->fields)._items;
                                        auStack_10 = (undefined1  [8])0x3;
                                        if (pPVar16 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0)
                                        {
                                          uVar6 = (pLVar13->fields)._size;
                                          if (uVar6 < (uint)pPVar16->max_length) {
                                            (pLVar13->fields)._size = uVar6 + 1;
                                            auStack_10 = (undefined1  [8])0x3;
                                            if ((uint)pPVar16->max_length <= uVar6)
                                            goto code_?;
                                            pPVar16->vector[(int)uVar6].Quadrant = 3;
                                            pPVar16->vector[(int)uVar6].FirstAxisSign = 0;
                                            pPVar16->vector[(int)uVar6].SecondAxisSign = 1;
                                          }
                                          else {
                                            pLStack_11 = (
                                                  List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
                                                  CONCAT44(pLStack_11._4_4_,1);
                                            mscorlib.dll::System::Collections::Generic::List`1[RTG::
                                            PlaneIdHelper+PlaneQuadrantInfo]::
                                            List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                                                      (pLVar13,(PlaneIdHelper_PlaneQuadrantInfo *)
                                                               auStack_10,
                                                       pMVar14->klass->rgctx_data[0xe].method);
                                          }
                                          if (iRam_? != 0) {
                                            uVar6 = (uint)((ulonglong)apLStack_17 >> 0xc);
                                            lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                                            do {
                                              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                                              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                                              LOCK();
                                              bVar5 = uVar8 == *puVar9;
                                              if (bVar5) {
                                                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                                              }
                                              UNLOCK();
                                            } while (!bVar5);
                                          }
                                          iVar18 = iRam_?;
                                          pLVar2 = TypeInfo__RTG__PlaneIdHelper->static_fields->
                                                   _planeInfo;
                                          apLStack_17[0] = pLVar13;
                                          if (pLVar2 != (List_1_RTG_PlaneIdHelper_PlaneInfo_ *)0x0)
                                          {
                                            if ((uint)(pLVar2->fields)._size < 3)
                                            goto code_?;
                                            pPVar4 = (pLVar2->fields)._items;
                                            auStack_10 = (undefined1  [8])uStack_1;
                                            pLStack_11 = pLVar13;
                                            if (pPVar4 != (PlaneIdHelper_PlaneInfo__Array *)0x0) {
                                              if (2 < (uint)pPVar4->max_length) {
                                                *(ulonglong *)(pPVar4->vector + 2) = uStack_1;
                                                pPVar4->vector[2].QuadrantInfo = pLVar13;
                                                if (iVar18 != 0) {
                                                  uVar6 = (uint)((ulonglong)
                                                                  &pPVar4->vector[2].QuadrantInfo
                                                                 >> 0xc);
                                                  lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                                                  do {
                                                    uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                                                    puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                                                    LOCK();
                                                    bVar5 = uVar8 == *puVar9;
                                                    if (bVar5) {
                                                      *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                                                    }
                                                    UNLOCK();
                                                  } while (!bVar5);
                                                }
                                                piVar15 = &(pLVar2->fields)._version;
                                                *piVar15 = *piVar15 + 1;
                                                return;
                                              }
                                              goto code_?;
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
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* PlaneId[] get_AllPlaneIds() */

PlaneId__Enum__Array *
Assembly-CSharp.dll::RTG::PlaneIdHelper::PlaneIdHelper_get_AllPlaneIds(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__PlaneIdHelper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__PlaneId);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__PlaneIdHelper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__RTG__PlaneIdHelper);
  }
  if (TypeInfo__RTG__PlaneIdHelper->static_fields->_allPlaneIds == (PlaneId__Enum__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pPVar2 = (PlaneId__Enum__Array *)(*pcVar1)();
    return pPVar2;
  }
  pPVar2 = (PlaneId__Enum__Array *)FUN_?();
  pPVar3 = TypeInfo__RTG__PlaneId;
  if (pPVar2 != (PlaneId__Enum__Array *)0x0) {
    pPVar4 = pPVar2->klass;
    cVar5 = FUN_?(TypeInfo__RTG__PlaneId,pPVar4);
    if (cVar5 != '\0') {
      return pPVar2;
    }
    if (((pPVar4->_1).field_0x6e & 0x10) != 0) {
      if ((((((pPVar3->_1).token & 0x20) != 0) || ((pPVar3->_0).byval_arg.type == 0x13)) ||
          ((pPVar3->_0).byval_arg.type == 0x1e)) &&
         ((((pPVar3->_0).interopData != (Il2CppInteropData *)0x0 &&
           (((pPVar3->_0).interopData)->guid != (Il2CppGuid *)0x0)) &&
          (lVar6 = FUN_?(pPVar2), lVar6 != 0)))) {
        return pPVar2;
      }
      pPVar7 = (PlaneId__Enum__Array *)0x0;
      if (pPVar3 == pPRam0000000182dc5040) {
        pPVar7 = pPVar2;
      }
      return pPVar7;
    }
  }
  return (PlaneId__Enum__Array *)0x0;
}

