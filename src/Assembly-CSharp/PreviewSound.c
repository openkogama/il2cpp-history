
/* Void OnClick() */

void Assembly-CSharp.dll::PreviewSound::PreviewSound_OnClick(PreviewSound *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__UnityEngine__Events__UnityEvent<System::String,_int>__Invoke_System__String__int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__UnityEngine__Events__UnityEvent<System::String,_int>__Invoke_System__String__int_;
  this_00 = (this->fields).onClick;
  if (this_00 == (UnityEvent_2_System_String_System_Int32_ *)0x0) {
    return;
  }
  args1 = (this->fields).index;
  args0 = (this->fields).soundCategory;
  pMStackX_20 = 
  MethodInfo__UnityEngine__Events__UnityEvent<System::String,_int>__Invoke_System__String__int_;
  iStackX_18 = args1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Events__InvokableCall);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_00 != (UnityEvent_2_System_String_System_Int32_ *)0x0) {
    pLVar2 = UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEventBase::
             UnityEventBase_PrepareInvoke((UnityEventBase *)this_00,(MethodInfo *)0x0);
    uVar3 = 0;
    if (pLVar2 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
      lVar4 = 0x20;
code_?:
      do {
        if ((pLVar2->fields)._size <= (int)uVar3) {
          return;
        }
        if ((uint)(pLVar2->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pBVar6 = (pLVar2->fields)._items;
        if (pBVar6 == (BaseInvokableCall__Array *)0x0) break;
        if ((uint)pBVar6->max_length <= uVar3) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_01 = *(InvokableCall_2_System_Object_System_Int32_ **)
                   ((longlong)pBVar6->vector + lVar4 + -0x20);
        pIVar7 = pMVar1->klass->rgctx_data[3].klass;
        if ((pIVar7->field_0x135 & 1) == 0) {
          pIVar7 = (Il2CppClass *)FUN_?(pIVar7);
        }
        if (this_01 != (InvokableCall_2_System_Object_System_Int32_ *)0x0) {
          if ((pIVar7->naturalAligment <= (this_01->klass->_1).naturalAligment) &&
             ((this_01->klass->_1).typeHierarchy[(ulonglong)pIVar7->naturalAligment - 1] == pIVar7))
          {
            UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall`2[System::Object,System::
            Int32]::InvokableCall_2_System_Object_System_Int32__Invoke_1
                      (this_01,(Object *)args0,args1,pMVar1->klass->rgctx_data[7].method);
            uVar3 = uVar3 + 1;
            lVar4 = lVar4 + 8;
            goto code_?;
          }
        }
        this_02 = (InvokableCall *)FUN_?(pLVar2,uVar3);
        if (this_02 != (InvokableCall *)0x0) {
          bVar8 = (TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment;
          if ((bVar8 <= (this_02->klass->_1).naturalAligment) &&
             ((this_02->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] ==
              (Il2CppClass *)TypeInfo__UnityEngine__Events__InvokableCall)) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                      (this_02,(MethodInfo *)0x0);
            uVar3 = uVar3 + 1;
            lVar4 = lVar4 + 8;
            goto code_?;
          }
        }
        plVar9 = (longlong *)FUN_?(pLVar2,uVar3);
        if ((this_00->fields).m_InvokeArray == (Object__Array *)0x0) {
          pOVar10 = (Object__Array *)FUN_?(TypeInfo__System__Object,2);
          (this_00->fields).m_InvokeArray = pOVar10;
          func_?(&(this_00->fields).m_InvokeArray);
        }
        pOVar10 = (this_00->fields).m_InvokeArray;
        if (pOVar10 == (Object__Array *)0x0) break;
        if (args0 != (String *)0x0) {
          lVar11 = FUN_?(args0,(pOVar10->klass->_0).element_class);
          if (lVar11 == 0) {
            uVar12 = FUN_?();
            FUN_?(uVar12,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        FUN_?(pOVar10,0,args0);
        pOVar10 = (this_00->fields).m_InvokeArray;
        aiStackX_8[0] = iStackX_18;
        lVar11 = FUN_?(pMStackX_20->klass->rgctx_data[6].rgctxDataDummy,aiStackX_8);
        if (pOVar10 == (Object__Array *)0x0) break;
        if (lVar11 != 0) {
          lVar13 = FUN_?(lVar11,(pOVar10->klass->_0).element_class);
          if (lVar13 == 0) {
            uVar12 = FUN_?();
            FUN_?(uVar12,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        FUN_?(pOVar10,1,lVar11);
        if (plVar9 == (longlong *)0x0) break;
        (**(code **)(*plVar9 + 0x178))
                  (plVar9,(this_00->fields).m_InvokeArray,*(undefined8 *)(*plVar9 + 0x180));
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 8;
        pMVar1 = pMStackX_20;
        args1 = iStackX_18;
      } while( true );
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::PreviewSound::PreviewSound_Start(PreviewSound *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).playSelected == 0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar1,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                           ((Object_1 *)pTVar1,(MethodInfo *)0x0);
        if (pSVar2 != (String *)0x0) {
          pSVar2 = mscorlib.dll::System::String::String_Substring_1
                             (pSVar2,5,(pSVar2->fields)._stringLength + -5,(MethodInfo *)0x0);
          if (pSVar2 != (String *)0x0) {
            iVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_IndexOf_2
                              (&(pSVar2->fields)._firstChar,0x3a,(pSVar2->fields)._stringLength,
                               (MethodInfo *)0x0);
            pSVar2 = mscorlib.dll::System::String::String_Substring_1
                               (pSVar2,0,iVar3,(MethodInfo *)0x0);
            iVar3 = mscorlib.dll::System::Int32::Int32_Parse(pSVar2,(MethodInfo *)0x0);
            (this->fields).index = iVar3;
            if (iVar3 == 0) {
              obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                        ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->fields).index = -1;
  return;
}

