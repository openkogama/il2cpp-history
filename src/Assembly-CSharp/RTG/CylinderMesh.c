
/* Mesh CreateCylinder(Single, Single, Single, Int32, Int32, Int32, Int32, Color) */

Mesh * Assembly-CSharp.dll::RTG::CylinderMesh::CylinderMesh_CreateCylinder
                 (float bottomRadius,float topRadius,float height,int32_t numSlices,
                 int32_t numStacks,int32_t numBottomCapRings,int32_t numTopCapRings,Color color,
                 MethodInfo *method)

{
  iVar1 = numBottomCapRings;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<int>__AddRange_System__Collections__Generic__IEnumerable<int>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  iVar2 = 3;
  if (2 < numSlices) {
    iVar2 = numSlices;
  }
  pIVar3 = (IEnumerable_1_System_Int32___Class *)(iVar2 + 1);
  iVar4 = 1;
  if (0 < numStacks) {
    iVar4 = numStacks;
  }
  iVar5 = iVar4 + 1;
  numStacks = (int)pIVar3 * iVar5;
  pIVar6 = (IEnumerable_1_UnityEngine_Vector3_ *)
           func_?(TypeInfo__UnityEngine__Vector3,numStacks);
  pIVar7 = (IEnumerable_1_UnityEngine_Vector3_ *)
           func_?(TypeInfo__UnityEngine__Vector3,numStacks);
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this,numStacks,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_00,numStacks,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  iStack_8 = 0;
  if (0 < iVar5) {
    do {
      iVar9 = 0;
      if (0 < (int)pIVar3) {
        do {
          func_?();
          func_?();
          func_?();
          if ((pIVar7 == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) ||
             (func_?(), pIVar6 == (IEnumerable_1_UnityEngine_Vector3_ *)0x0))
          goto code_?;
          func_?();
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)pIVar3);
      }
      iStack_8 = iStack_8 + 1;
    } while (iStack_8 < iVar5);
  }
  if ((this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                *)0x0) &&
     (mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
      List_1_UnityEngine_Vector3__AddRange
                ((List_1_UnityEngine_Vector3_ *)this,pIVar6,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                ),
     this_00 !=
     (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *)
     0x0)) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__AddRange
              ((List_1_UnityEngine_Vector3_ *)this_00,pIVar7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
              );
    pMVar10 = (MonitorData *)0x0;
    this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
              (this_01,100,MethodInfo__System__Collections__Generic__List<int>__List_int_);
    pIVar11 = (IEnumerable_1_System_Int32_ *)func_?();
    iStack_12 = 0;
    if (0 < iVar4) {
      pIVar13 = pIVar3;
      do {
        iStack_14 = 0;
        if (0 < iVar2) {
          pIVar15 = (IEnumerable_1_System_Int32___Class *)((1 - (int)pIVar3) + (int)pIVar13);
          pIVar16 = pIVar13;
          do {
            if (pIVar11 == (IEnumerable_1_System_Int32_ *)0x0) goto code_?;
            if (pIVar11[1].monitor <= pMVar10) goto code_?;
            (&pIVar11[2].klass)[(int)pMVar10] =
                 (IEnumerable_1_System_Int32___Class *)
                 ((int)&pIVar15[-1].vtable.GetEnumerator.method + 3);
            if (pIVar11[1].monitor <= pMVar10 + 1) goto code_?;
            (&pIVar11[2].klass)[(int)(pMVar10 + 1)] = pIVar16;
            if (pIVar11[1].monitor <= pMVar10 + 2) goto code_?;
            (&pIVar11[2].klass)[(int)(pMVar10 + 2)] = pIVar15;
            if (pIVar11[1].monitor <= pMVar10 + 3) goto code_?;
            (&pIVar11[2].klass)[(int)(pMVar10 + 3)] = pIVar16;
            if (pIVar11[1].monitor <= pMVar10 + 4) goto code_?;
            (&pIVar11[2].klass)[(int)(pMVar10 + 4)] =
                 (IEnumerable_1_System_Int32___Class *)((int)&(pIVar16->_0).image + 1);
            pMVar17 = pMVar10 + 5;
            pMVar10 = pMVar10 + 6;
            if (pIVar11[1].monitor <= pMVar17) goto code_?;
            pIVar16 = (IEnumerable_1_System_Int32___Class *)((int)&(pIVar16->_0).image + 1);
            (&pIVar11[2].klass)[(int)pMVar17] = pIVar15;
            iStack_14 = iStack_14 + 1;
            pIVar15 = (IEnumerable_1_System_Int32___Class *)((int)&(pIVar15->_0).image + 1);
          } while (iStack_14 < iVar2);
        }
        iStack_12 = iStack_12 + 1;
        pIVar13 = (IEnumerable_1_System_Int32___Class *)
                  ((int)&(pIVar13->_0).image + (int)&(pIVar3->_0).image);
      } while (iStack_12 < iVar4);
    }
    if (this_01 !=
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddRange
                ((List_1_System_Int32_ *)this_01,pIVar11,
                 MethodInfo__System__Collections__Generic__List<int>__AddRange_System__Collections__Generic__IEnumerable<int>_
                );
      if (0 < numBottomCapRings) {
        numStacks = numStacks + (int)pIVar3 * (numBottomCapRings + 1);
        pIVar6 = (IEnumerable_1_UnityEngine_Vector3_ *)func_?();
        pIVar7 = (IEnumerable_1_UnityEngine_Vector3_ *)func_?();
        iStack_14 = 0;
        do {
          iVar4 = 0;
          if (0 < (int)pIVar3) {
            do {
              func_?();
              func_?();
              func_?();
              if ((pIVar6 == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) ||
                 (func_?(), pIVar7 == (IEnumerable_1_UnityEngine_Vector3_ *)0x0))
              goto code_?;
              func_?();
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)pIVar3);
          }
          iStack_14 = iStack_14 + 1;
        } while (iStack_14 < numBottomCapRings + 1);
        iVar4 = (this->fields)._size;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
        List_1_UnityEngine_Vector3__AddRange
                  ((List_1_UnityEngine_Vector3_ *)this,pIVar6,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                  );
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
        List_1_UnityEngine_Vector3__AddRange
                  ((List_1_UnityEngine_Vector3_ *)this_00,pIVar7,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                  );
        pMVar10 = (MonitorData *)0x0;
        pIVar11 = (IEnumerable_1_System_Int32_ *)func_?();
        pIVar13 = (IEnumerable_1_System_Int32___Class *)(iVar4 + 1);
        bottomRadius = 0.0;
        do {
          numBottomCapRings = 0;
          pIVar16 = pIVar13;
          if (0 < iVar2) {
            do {
              if (pIVar11 == (IEnumerable_1_System_Int32_ *)0x0) goto code_?;
              if (pIVar11[1].monitor <= pMVar10) goto code_?;
              (&pIVar11[2].klass)[(int)pMVar10] =
                   (IEnumerable_1_System_Int32___Class *)
                   ((int)&pIVar16[-1].vtable.GetEnumerator.method + 3);
              if (pIVar11[1].monitor <= pMVar10 + 1) goto code_?;
              (&pIVar11[2].klass)[(int)(pMVar10 + 1)] = pIVar16;
              if (pIVar11[1].monitor <= pMVar10 + 2) goto code_?;
              pIVar15 = (IEnumerable_1_System_Int32___Class *)((int)&(pIVar16->_0).image + iVar2);
              (&pIVar11[2].klass)[(int)(pMVar10 + 2)] = pIVar15;
              if (pIVar11[1].monitor <= pMVar10 + 3) goto code_?;
              (&pIVar11[2].klass)[(int)(pMVar10 + 3)] = pIVar15;
              if (pIVar11[1].monitor <= pMVar10 + 4) goto code_?;
              (&pIVar11[2].klass)[(int)(pMVar10 + 4)] = pIVar16;
              pMVar17 = pMVar10 + 5;
              pMVar10 = pMVar10 + 6;
              if (pIVar11[1].monitor <= pMVar17) goto code_?;
              (&pIVar11[2].klass)[(int)pMVar17] =
                   (IEnumerable_1_System_Int32___Class *)
                   ((int)&(pIVar3->_0).image + (int)&(pIVar16->_0).image);
              numBottomCapRings = numBottomCapRings + 1;
              pIVar16 = (IEnumerable_1_System_Int32___Class *)((int)&(pIVar16->_0).image + 1);
            } while (numBottomCapRings < iVar2);
          }
          bottomRadius = (float)((int)bottomRadius + 1);
          pIVar13 = (IEnumerable_1_System_Int32___Class *)
                    ((int)&(pIVar13->_0).image + (int)&(pIVar3->_0).image);
        } while ((int)bottomRadius < iVar1);
        mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
        List_1_System_Int32__AddRange
                  ((List_1_System_Int32_ *)this_01,pIVar11,
                   MethodInfo__System__Collections__Generic__List<int>__AddRange_System__Collections__Generic__IEnumerable<int>_
                  );
      }
      if (0 < numTopCapRings) {
        numStacks = numStacks + (int)pIVar3 * (numTopCapRings + 1);
        pIVar6 = (IEnumerable_1_UnityEngine_Vector3_ *)func_?();
        pIVar7 = (IEnumerable_1_UnityEngine_Vector3_ *)func_?();
        bottomRadius = 0.0;
        do {
          iVar4 = 0;
          if (0 < (int)pIVar3) {
            do {
              func_?();
              func_?();
              func_?();
              if ((pIVar6 == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) ||
                 (func_?(), pIVar7 == (IEnumerable_1_UnityEngine_Vector3_ *)0x0))
              goto code_?;
              func_?();
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)pIVar3);
          }
          bottomRadius = (float)((int)bottomRadius + 1);
        } while ((int)bottomRadius < numTopCapRings + 1);
        pIVar13 = (IEnumerable_1_System_Int32___Class *)(this->fields)._size;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
        List_1_UnityEngine_Vector3__AddRange
                  ((List_1_UnityEngine_Vector3_ *)this,pIVar6,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                  );
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
        List_1_UnityEngine_Vector3__AddRange
                  ((List_1_UnityEngine_Vector3_ *)this_00,pIVar7,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                  );
        pMVar10 = (MonitorData *)0x0;
        pIVar11 = (IEnumerable_1_System_Int32_ *)func_?();
        bottomRadius = 0.0;
        do {
          pIVar13 = (IEnumerable_1_System_Int32___Class *)
                    ((int)&(pIVar13->_0).image + (int)&(pIVar3->_0).image);
          topRadius = 0.0;
          if (0 < iVar2) {
            pIVar15 = (IEnumerable_1_System_Int32___Class *)((1 - (int)pIVar3) + (int)pIVar13);
            pIVar16 = pIVar13;
            do {
              if (pIVar11 == (IEnumerable_1_System_Int32_ *)0x0) goto code_?;
              if (pIVar11[1].monitor <= pMVar10) goto code_?;
              (&pIVar11[2].klass)[(int)pMVar10] =
                   (IEnumerable_1_System_Int32___Class *)
                   ((int)&pIVar15[-1].vtable.GetEnumerator.method + 3);
              if (pIVar11[1].monitor <= pMVar10 + 1) goto code_?;
              (&pIVar11[2].klass)[(int)(pMVar10 + 1)] = pIVar16;
              if (pIVar11[1].monitor <= pMVar10 + 2) goto code_?;
              (&pIVar11[2].klass)[(int)(pMVar10 + 2)] = pIVar15;
              if (pIVar11[1].monitor <= pMVar10 + 3) goto code_?;
              (&pIVar11[2].klass)[(int)(pMVar10 + 3)] = pIVar16;
              if (pIVar11[1].monitor <= pMVar10 + 4) goto code_?;
              (&pIVar11[2].klass)[(int)(pMVar10 + 4)] =
                   (IEnumerable_1_System_Int32___Class *)((int)&(pIVar16->_0).image + 1);
              pMVar17 = pMVar10 + 5;
              pMVar10 = pMVar10 + 6;
              if (pIVar11[1].monitor <= pMVar17) goto code_?;
              (&pIVar11[2].klass)[(int)pMVar17] = pIVar15;
              pIVar16 = (IEnumerable_1_System_Int32___Class *)((int)&(pIVar16->_0).image + 1);
              pIVar15 = (IEnumerable_1_System_Int32___Class *)((int)&(pIVar15->_0).image + 1);
              topRadius = (float)((int)topRadius + 1);
            } while ((int)topRadius < iVar2);
          }
          bottomRadius = (float)((int)bottomRadius + 1);
        } while ((int)bottomRadius < numTopCapRings);
        mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
        List_1_System_Int32__AddRange
                  ((List_1_System_Int32_ *)this_01,pIVar11,
                   MethodInfo__System__Collections__Generic__List<int>__AddRange_System__Collections__Generic__IEnumerable<int>_
                  );
      }
      pMVar18 = (Mesh *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar18,(MethodInfo *)0x0);
      pMVar19 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
               ::MultiColumnCollectionHeader+ViewState+ColumnState]::
               List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                         (this,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                         );
      if (pMVar18 != (Mesh *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                  (pMVar18,(Vector3__Array *)pMVar19,(MethodInfo *)0x0);
        pMVar19 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                 List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                           (this_00,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                           );
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals
                  (pMVar18,(Vector3__Array *)pMVar19,(MethodInfo *)0x0);
        value = ColorEx::ColorEx_GetFilledColorArray(numStacks,color,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                  (pMVar18,value,(MethodInfo *)0x0);
        pMVar19 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                 List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                           (this_01,MethodInfo__System__Collections__Generic__List<int>__ToArray__);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                  (pMVar18,(Int32__Array *)pMVar19,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                  (pMVar18,0,(MethodInfo *)0x0);
        return pMVar18;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  pMVar18 = (Mesh *)(*pcVar20)();
  return pMVar18;
}

