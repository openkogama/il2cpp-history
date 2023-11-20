/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.Events;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVWorldObjectClient : MVWorldObject
{
	// Fields
	public UnityAction<MVWorldObjectClient, PositionChangedEventArgs> PositionChanged;
	public UnityAction<MVWorldObjectClient, RotationChangedEventArgs> RotationChanged;
	public UnityAction<MVWorldObjectClient, ScaleChangedEventArgs> ScaleChanged;
	public UnityAction<MVWorldObjectClient, SelectedEventArgs> SelectedChanged;
	protected bool isCastingShadows;
	protected static int woShadowCastersCount;
	protected static int woMaxShadowCasters;
	private int goId;
	protected string name;
	protected GameObject gameObject;
	protected Collider collider;
	protected Transform transform;
	protected InteractionDataHandlerBase interactionDataHandlerBase;
	protected ObjectPrefab component;
	private MVGroup group;
	private bool selected;
	protected SelectedConnector selectedConnector;
	protected GameObject inputConnectorObject;
	protected GameObject outputConnectorObject;
	protected GameObject objectConnectorObject;
	protected InteractionFlags interactionFlags;
	protected InteractionFlags eliteRequiredFlags;
	protected LayerFlags previewLayerMask;
	[CompilerGenerated]
	private PlayInteractionType _PlayInteractionType_k__BackingField;
	private MVRuntimeDataVariables runtimeDataVariables;
	private bool initializedFromInventory;

	// Properties
	public override Vector3 Position { get; set; }
	public override Quaternion Rotation { get; set; }
	public Vector3 EulerAngles { get; set; }
	public override Vector3 Scale { get; set; }
	public virtual new Vector3 WorldPosition { get; set; }
	public new Quaternion WorldRotation { get; set; }
	public Vector3 WorldEulerAngles { get; set; }
	public virtual Vector3 SyncPos { get; set; }
	public virtual Quaternion SyncRot { get; set; }
	public MVGroup Group { get; set; }
	public bool Selected { get; protected set; }
	public HashSet<int> WorldIDsRecursive { get; }
	public virtual Vector3 WorldPivot { get; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	public override bool HasObjectConnector { get; }
	public InteractionFlags InteractionFlags { get; set; }
	public LayerFlags PreviewLayerMask { get; }
	public PlayInteractionType PlayInteractionType { [CompilerGenerated] get; [CompilerGenerated] set; }
	public int GameObjectID { get; }
	public GameObject GameObject { get; }
	public ObjectPrefab Component { get; }
	public Collider Collider { get; }
	public Transform Transform { get; }
	public InteractionDataHandlerBase InteractionDataHandlerBase { get; }
	public SelectedConnector SelectedConnector { get; }
	public virtual Vector3 InputConnectorOffset { get; }
	public virtual Vector3 OutputConnectorOffset { get; }
	public virtual Vector3 ObjectConnectorOffset { get; }
	public virtual Quaternion InputConnectorRotation { get; }
	public virtual Quaternion OutputConnectorRotation { get; }
	public virtual Quaternion ObjectConnectorRotation { get; }
	public MVRuntimeDataVariables RuntimeDataVariables { get; }
	public override Dictionary<object, object> RunTimeData { get; set; }
	public virtual MVWorldObjectDocumentationType DocumentationType { get; private set; }
	public virtual bool Visible { get; set; }

	// Nested types
	public delegate void CallBackDelegate(MVWorldObjectClient woc);

	private struct TransformData
	{
		// Fields
		public Vector3 position;
		public Quaternion rotation;
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass164_0
	{
		// Fields
		public Matrix4x4 localToWorld;

		// Constructors
		public __c__DisplayClass164_0();

		// Methods
		internal Vector3 _GetBoundsCornersWorld_b__0(Vector3 localCorner);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass51_0
	{
		// Fields
		public HashSet<int> childIDs;

		// Constructors
		public __c__DisplayClass51_0();

		// Methods
		internal void _get_WorldIDsRecursive_b__0(MVWorldObjectClient wo);
	}

	// Constructors
	public MVWorldObjectClient(Dictionary<object, object> data, GameObject prefabObject, Dictionary<int, MVWorldObjectClient> worldObjects);
	public MVWorldObjectClient(Dictionary<object, object> data, ObjectPrefab prefabObject, Dictionary<int, MVWorldObjectClient> worldObjects);
	public MVWorldObjectClient(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);
	static MVWorldObjectClient();

	// Methods
	public virtual void PositionChangedNotify();
	private GameObject InstantiatePrefab(GameObject prefabObject, TransformData transformData);
	private ObjectPrefab InstantiatePrefab(ObjectPrefab prefabObject, TransformData transformData);
	public bool HasInteractionFlag(InteractionFlags flag);
	public bool HasEliteRequiredFlag(InteractionFlags flag);
	private void SetupBusinessLogic();
	private TransformData GetTransformData(Dictionary<object, object> data);
	private void ApplyData(Dictionary<object, object> data);
	private void CreateWorldObject(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);
	public MVWorldObjectClient GetHitInteractionHandlingWO();
	public virtual void TraverseRecursiveTail(CallBackDelegate callBack);
	public virtual bool CompareWithKoGaMaPackage(MVWorldObjectClient wo, KoGaMaPackageClient koGaMaPackageClient, ref int insertedByProfileId);
	public virtual void Compare(MVWorldObjectClient wo, bool visibleCubesOnly, ref int matchingCubeCount, ref int investigatedCubeCount);
	public virtual MVWorldObjectClient Clone(int ownerActorNumber, int cloneGroupId, CloneBookkeeping cloneBookkeeping, Dictionary<int, MVWorldObjectClient> worldObjects, Dictionary<int, RuntimePrototypeCubeModel> prototypes);
	public virtual void SetWorldObjectToPurchased();
	public void SetNetworkObject(bool local);
	public virtual void Initialize();
	public void InventoryInitialize();
	public virtual void InitializeInventory();
	public virtual void PlayModeInitialize();
	public virtual void SetupTierInventory();
	public virtual void UnSetupTierInventory();
	public virtual void Destroy();
	public virtual void OnDataUpdate();
	public virtual void OnRunTimeDataUpdate();
	public virtual bool OnEnterObject(EditorStateMachine e);
	public virtual bool OnExitObject(EditorStateMachine e);
	protected virtual void OnSelectedChanged(bool selected);
	public virtual bool ValidateObjectLinkTarget(MVWorldObjectClient wo);
	public void SendPackage(Dictionary<object, object> package);
	public virtual void ReceivePackage(MVPlayer p, Dictionary<object, object> package);
	public virtual void ReceiveInteractionPackage(InteractionData interactionStruct, MVPlayer p);
	private void CreateConnectors();
	public void RuntimeDataUpdate(Dictionary<object, object> dataDelta);
	public override void PartialUpdateWOData(Dictionary<object, object> woData);
	public override void PartialRemoveFromWOData(Dictionary<object, object> entriesToRemove);
	public virtual void HandleInput(NetworkInputActionCodes actionCode, NetworkInputKeyCodes keyCode);
	public virtual Vector3 GetClosestGridPoint(float gridSize, Vector3 position);
	public virtual bool OnClickHandler(EditorStateMachine esm, Collider collider);
	public Vector3 GetInputConnectorPos();
	public Vector3 GetOutputConnectorPos();
	public Vector3 GetObjectConnectorPos();
	public bool IsPointOverInputConnector(Vector3 mousePoint);
	public bool IsPointOverOutputConnector(Vector3 mousePoint);
	public virtual void HighlightConnector(bool state);
	private bool DoesScreenPointHitCollider(Vector3 point, Collider collider);
	public virtual Bounds GetLocalBounds(BoundsContext boundsContext);
	public Vector3[] GetBoundsCornersLocal(BoundsContext boundsContext);
	public Vector3[] GetBoundsCornersWorld(BoundsContext boundsContext);
	public virtual void Select();
	public virtual void Select(Color color);
	public virtual void DeSelect();
	public virtual void AddPreviewBox();
	public virtual void AddSelectionBox();
	protected GameObject CreateBox(string name, float scale);
	public virtual void RemoveSelectionBox();
	public virtual void RemovePreviewBox();
	protected virtual void HideConnectors();
	protected virtual void ShowConnectors();
	public virtual bool Delete(MVWorldObjectClientManager worldObjectClientManager, ref string errorText);
	public void SetName();
	public override string ToString();
	public virtual Vector3 GetTargetPosition();
	public float ComputeObjectRadius();
	public float ComputeObjectSqrRadius();
	public void RotateAround(Vector3 pivot, Vector3 axis, float angle);
	public void RotateAroundLocal(Vector3 pivot, RotationMode rotationMode, float angle);
	private Vector3 GetLocalAxis(RotationMode rotationMode);
	public void ResetRotation();
	public static void DestroyRecursive(MVWorldObjectClient wo);
	public virtual void DrawTransformGizmo();
	public virtual void OnContextMenu();
}

