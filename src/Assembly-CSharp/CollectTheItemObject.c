
/* Void InitializeGreyOutScript() */

void Assembly-CSharp.dll::CollectTheItemObject::CollectTheItemObject_InitializeGreyOutScript
               (CollectTheItemObject *this,MethodInfo *method)

{
  pGVar1 = (this->fields).greyOutObject;
  if (pGVar1 != (GreyOutObjectScript *)0x0) {
    if (cRam_? == '\0') {
      ppMStack_2 = &
                    UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
      ;
      func_?();
      func_?(&
                      MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Clear__
                     );
      func_?(&TypeInfo__GreyOutObjectScript__PickupOriginalMaterials);
      cRam_? = '\x01';
    }
    pLVar3 = (pGVar1->fields).pickupOriginalMaterials;
    if (pLVar3 != (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) {
      length = (pLVar3->fields)._size;
      piVar4 = &(pLVar3->fields)._version;
      *piVar4 = *piVar4 + 1;
      (pLVar3->fields)._size = 0;
      if (0 < length) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar3->fields)._items,0,length,(MethodInfo *)0x0);
      }
      this_00 = (pGVar1->fields).pickupObject;
      if (this_00 != (GameObject *)0x0) {
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_GetComponentsInChildren
                            (this_00,
                             UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                            );
        uVar5 = 0;
        if (this_02 != (Object__Array *)0x0) {
          ppOVar6 = this_02->vector;
          while( true ) {
            method_00 = TypeInfo__GreyOutObjectScript__PickupOriginalMaterials;
            if ((int)this_02->max_length <= (int)uVar5) {
              return;
            }
            if (this_02->max_length <= uVar5) break;
            this_01 = (Object__Class *)*ppOVar6;
            value = (Object *)func_?();
            *(undefined1 *)&value[2].klass = 1;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
            value[1].klass = this_01;
            func_?();
            if (this_01 == (Object__Class *)0x0) goto code_?;
            pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterials
                               ((Renderer *)this_01,(MethodInfo *)0x0);
            value[1].monitor = (MonitorData *)pMVar7;
            func_?();
            this_02 = *(Object__Array **)&(this_01->_0).this_arg.attrs;
            if (this_02 == (Object__Array *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)this_02,value,
                       MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                      );
            uVar5 = uVar5 + 1;
            ppOVar6 = (Object **)&value->monitor;
          }
          func_?();
        }
      }
    }
  }
code_?:
  uVar8 = func_?(&ppMStack_2);
  func_?(uVar8);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean ShouldDoBlinking() */

bool Assembly-CSharp.dll::CollectTheItemObject::CollectTheItemObject_ShouldDoBlinking
               (CollectTheItemObject *this,MethodInfo *method)

{
  fVar1 = (this->fields).fadeTimer;
  if (fVar1 < _UNK_?) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields).fadeTimer = fVar2 + fVar1;
    return 0;
  }
  return 1;
}


/* Void Update() */

void Assembly-CSharp.dll::CollectTheItemObject::CollectTheItemObject_Update
               (CollectTheItemObject *this,MethodInfo *method)

{
  fVar1 = (this->fields).fadeTimer;
  if (fVar1 < _UNK_?) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields).fadeTimer = fVar2 + fVar1;
    return;
  }
  this_00 = (this->fields).blinker;
  if (this_00 != (CollectTheItemBlinker *)0x0) {
    BlinkerBase::BlinkerBase_StartBlinking
              ((BlinkerBase *)this_00,BlinkType__Enum_AboutToExpire,INFINITY,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean get_EnableFading() */

bool Assembly-CSharp.dll::CollectTheItemObject::CollectTheItemObject_get_EnableFading
               (CollectTheItemObject *this,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?(&UNK_?);
  }
  bVar1 = (*pcRam_?)(this);
  return bVar1;
}


/* Void set_EnableFading(Boolean) */

void Assembly-CSharp.dll::CollectTheItemObject::CollectTheItemObject_set_EnableFading
               (CollectTheItemObject *this,bool value,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?(&UNK_?);
  }
  (*pcRam_?)(this,_value);
  return;
}

