
/* Void OnDisable() */

void Assembly-CSharp.dll::InsertCursor::InsertCursor_OnDisable
               (InsertCursor *this,MethodInfo *method)

{
  uVar1 = 0;
  pMVar2 = (this->fields).renderers;
  if (pMVar2 != (MeshRenderer__Array *)0x0) {
    ppMVar3 = pMVar2->vector;
    while( true ) {
      if ((int)pMVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pMVar2->max_length <= uVar1) break;
      if (*ppMVar3 == (MeshRenderer *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                ((Renderer *)*ppMVar3,0,(MethodInfo *)0x0);
      uVar1 = uVar1 + 1;
      ppMVar3 = ppMVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::InsertCursor::InsertCursor_OnEnable(InsertCursor *this,MethodInfo *method)

{
  uVar1 = 0;
  pMVar2 = (this->fields).renderers;
  if (pMVar2 != (MeshRenderer__Array *)0x0) {
    ppMVar3 = pMVar2->vector;
    while( true ) {
      if ((int)pMVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pMVar2->max_length <= uVar1) break;
      if (*ppMVar3 == (MeshRenderer *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                ((Renderer *)*ppMVar3,1,(MethodInfo *)0x0);
      uVar1 = uVar1 + 1;
      ppMVar3 = ppMVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::InsertCursor::InsertCursor_Start(InsertCursor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshRenderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                   );
    cRam_? = '\x01';
  }
  pMVar1 = (MeshRenderer__Array *)
           Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                     ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)this,
                      UnityEngine__MeshRenderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                     );
  (this->fields).renderers = pMVar1;
  func_?(&(this->fields).renderers,pMVar1);
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,0,(MethodInfo *)0x0);
  return;
}


/* InsertCursor() */

void Assembly-CSharp.dll::InsertCursor::InsertCursor__ctor(InsertCursor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__MeshRenderer);
    cRam_? = '\x01';
  }
  pMVar1 = (MeshRenderer__Array *)func_?(TypeInfo__UnityEngine__MeshRenderer,0);
  (this->fields).renderers = pMVar1;
  func_?(&(this->fields).renderers,pMVar1);
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
            ((Transform *)this,(MethodInfo *)0x0);
  return;
}

