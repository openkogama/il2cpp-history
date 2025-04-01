
/* Boolean <GatherDestinationObjects>b__0(GameObject) */

bool Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D+<>c__DisplayClass22_0::
     GizmoObjectVertexSnapDrag3D_c_DisplayClass22_0__GatherDestinationObjects_b__0
               (GizmoObjectVertexSnapDrag3D_c_DisplayClass22_0 *this,GameObject *a,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__FindAll_System__Predicate<UnityEngine::GameObject>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    func_?(&TypeInfo__RTG__ObjectBounds);
    func_?(&TypeInfo__System__Predicate<UnityEngine::GameObject>);
    func_?(&
                    MethodInfo__RTG__GizmoObjectVertexSnapDrag3D____c__DisplayClass22_1___GatherDestinationObjects_b__1_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__RTG__GizmoObjectVertexSnapDrag3D____c__DisplayClass22_1);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__GizmoObjectVertexSnapDrag3D____c__DisplayClass22_1;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)a;
    func_?(value + 1,a);
    pLVar1 = (this->fields).targetObjects;
    if (pLVar1 != (List_1_UnityEngine_GameObject_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Contains
                        ((List_1_System_Object_ *)pLVar1,(Object *)value[1].klass,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                        );
      if (bVar2 == 0) {
        camera = (this->fields).focusCamera;
        puVar3 = (undefined *)(this->fields).boundsQConfig.ObjectTypes;
        pOVar4 = (ObjectBounds__Class *)(this->fields).boundsQConfig.NoVolumeSize.x;
        fVar5 = (this->fields).boundsQConfig.NoVolumeSize.y;
        fVar6 = (this->fields).boundsQConfig.NoVolumeSize.z;
        gameObject = value[1].klass;
        if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
          puVar3 = &UNK_?;
          pOVar4 = TypeInfo__RTG__ObjectBounds;
          func_?();
        }
        queryConfig.NoVolumeSize.x = (float)pOVar4;
        queryConfig.ObjectTypes = (int32_t)puVar3;
        queryConfig.NoVolumeSize.y = fVar5;
        queryConfig.NoVolumeSize.z = fVar6;
        pRVar7 = ObjectBounds::ObjectBounds_CalcScreenRect
                           ((Rect *)&stack0xffffffec,(GameObject *)gameObject,camera,queryConfig,
                            (MethodInfo *)0x0);
        fVar5 = (this->fields).inputDevicePos.x;
        fVar6 = (this->fields).inputDevicePos.y;
        if ((((pRVar7->m_XMin <= fVar5) && (fVar5 < pRVar7->m_Width + pRVar7->m_XMin)) &&
            (pRVar7->m_YMin <= fVar6)) && (fVar6 < pRVar7->m_Height + pRVar7->m_YMin)) {
          pLVar1 = (this->fields).targetObjects;
          this_00 = (Predicate_1_Object_ *)func_?();
          mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                    (this_00,value,
                     MethodInfo__RTG__GizmoObjectVertexSnapDrag3D____c__DisplayClass22_1___GatherDestinationObjects_b__1_UnityEngine__GameObject_
                     ,(MethodInfo *)0x0);
          if (pLVar1 != (List_1_UnityEngine_GameObject_ *)0x0) {
            pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                     List_1_System_Object__FindAll
                               ((List_1_System_Object_ *)pLVar1,this_00,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__FindAll_System__Predicate<UnityEngine::GameObject>_
                               );
            if (pLVar8 != (List_1_System_Object_ *)0x0) {
              return (pLVar8->fields)._size != 0;
            }
          }
          goto code_?;
        }
      }
      return 1;
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  bVar2 = (*pcVar9)();
  return bVar2;
}

